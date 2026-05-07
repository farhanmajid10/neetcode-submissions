class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, unordered_set<char>> rows;
        unordered_map<int, unordered_set<char>> cols;
        unordered_map<int, unordered_set<char>> boxes;

        int rowsize = board.size();
        int colsize = board[0].size();

        for(int i = 0; i < rowsize; i++){
            for(int j = 0; j < colsize; j++){
                if(board[i][j] != '.'){
                    int num = board[i][j];
                    int idx = (((i/3) * 3) + j/3);

                    if(rows[i].count(num) || cols[j].count(num) || boxes[idx].count(num)){
                        return false;
                    } 
                    rows[i].insert(num);
                    cols[j].insert(num);
                    boxes[idx].insert(num);
                }
            }
        }
        return true;

    }
};
