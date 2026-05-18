class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows = collections.defaultdict(set)
        cols = collections.defaultdict(set)
        cubes = collections.defaultdict(set)

        for i in range(len(board)):
            for j in range(len(board[i])):
                if board[i][j] == ".":
                    continue
                if (board[i][j] in rows[i] or
                    board[i][j] in cols[j] or
                    board[i][j] in cubes[(i//3, j//3)]):
                        return False
                rows[i].add(board[i][j])
                cols[j].add(board[i][j])
                cubes[(i//3, j//3)].add(board[i][j])

        return True