class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool result;
        unordered_map<int,vector<char>> m_rows;
        unordered_map<int,vector<char>> m_cols;
        unordered_map<int,vector<char>> m_boxes;
        int rowsize = board.size();
        int colsize = board[0].size();
        for(int i = 0; i < rowsize; i++){
            for(int j = 0; j < colsize; j++){
                int temp = 0;
                if(board[i][j] != '.'){
                    temp = count(m_rows[i].begin(),m_rows[i].end(), board[i][j]);
                    if(temp){
                        return false;
                    }else{
                        m_rows[i].push_back(board[i][j]);
                    }
                }
                if(board[j][i] != '.'){
                    temp = count(m_cols[i].begin(),m_cols[i].end(),board[j][i]);
                    if(temp){
                        return false;
                    }else{
                        m_cols[i].push_back(board[j][i]);
                    }
                }
                if(board[i][j] != '.'){
                    int idx = ((i/3)*3) + (j/3); 
                    temp = count(m_boxes[idx].begin(),m_boxes[idx].end(),board[i][j]);
                    if(temp){
                        return false;
                    }else{
                        m_boxes[idx].push_back(board[i][j]);
                    }
                }
            }
        }
        return true;
    }
};
