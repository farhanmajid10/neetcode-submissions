class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,vector<int>> rows;
        unordered_map<int,vector<int>> cols;
        unordered_map<int,vector<int>> boxes;

        for(int i = 0; i < 9;i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.'){
                    
                }else{
                    int temp = board[i][j] - '0';
                    if(find(rows[i].begin(),rows[i].end(), temp) == rows[i].end()){
                        rows[i].push_back(temp);
                    }else{
                        return false;
                    }
                    if(find(cols[j].begin(),cols[j].end(), temp) == cols[j].end()){
                        cols[j].push_back(temp);
                    }else{
                        return false;
                    }
                    
                }
            }
        }
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                int box = ((3*(i/3)) + j/3);
                if(board[i][j] == '.'){
                    
                }else{
                    int temp = board[i][j] - '0';
                    if(find(boxes[box].begin(), boxes[box].end(), temp) == boxes[box].end()){
                        boxes[box].push_back(temp);
                    }else{return false;}
                }
            }
        }
        return true;
    }
};
