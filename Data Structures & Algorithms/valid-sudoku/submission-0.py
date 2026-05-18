class Solution:
    def checkRow(self, row:List[str])->bool:
        counts = [0]*10
        for element in row:
            if element != ".":
                counts[int(element)] += 1
                if counts[int(element)] > 1:
                    return False
        # print(counts)
        return True

    def checkBox(self, board: List[List[str]], rowIdx:int, ColIdx:int)->bool:
        counts = [0]*10
        for a in range(rowIdx, rowIdx+3, 1):
            for b in range(ColIdx, ColIdx+3, 1):
                # print(a, b, board[a][b])
                if board[a][b] != ".":
                    counts[int(board[a][b])] += 1
                    if counts[int(board[a][b])] > 1:
                        return False
        return True

    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for row in board:
            rowvalid = self.checkRow(row)
            if not rowvalid:
                return False
        
        for i in range(len(board)):
            counts = [0]*10
            for j in range(len(board[i])):
                element = board[j][i]
                if element != ".":
                    counts[int(element)] += 1
                    if counts[int(element)] > 1:
                        return False
            # print(counts)

        for i in range(0, 9, 3):
            for j in range(0, 9, 3):
                boxValid = self.checkBox(board, i, j)
                if not boxValid:
                    return False
        return True