class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows(9);
        unordered_map<int, unordered_set<char>> cols(9);
        unordered_map<int, unordered_set<char>> cubes(9);
        int cube_idx = 0;
        for(int r =0; r < 9; r++){
            for(int c=0; c < 9; c++){
                if(board[r][c] == '.'){
                    continue;
                }
                cube_idx = (r/3) * 3 + c/3;
                if (rows[r].find(board[r][c]) != rows[r].end() ||
                    cols[c].find(board[r][c]) != cols[c].end() ||
                    cubes[cube_idx].find(board[r][c]) != cubes[cube_idx].end()){
                        return false;
                    }
                rows[r].insert(board[r][c]);
                cols[c].insert(board[r][c]);
                cubes[cube_idx].insert(board[r][c]);
            }
        }
        return true;
    }
};
