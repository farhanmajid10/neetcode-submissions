class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> col;
        unordered_map<int, unordered_set<char>> row;
        unordered_map<int, unordered_set<char>> square;
        for(int r = 0; r < 9; r++){
            for(int c = 0; c < 9; c++){
                char cell = board[r][c];
                if(cell == '.'){
                    continue;
                }
                if(col[c].count(cell) || row[r].count(cell) || square[((r/3) * 3) + c/3].count(cell)){
                    return false;
                }
                col[c].insert(cell);
                row[r].insert(cell);
                square[((r/3) * 3) + c/3].insert(cell);
            }
        }
        return true;
    }
};
