class Solution {
public:
    bool bs(vector<vector<int>>& matrix, int left, int right, int target){
        while(left <= right){
            int middle = left + (right - left) / 2;
            int q = (middle)/ matrix[0].size();
            int r = (middle) % matrix[0].size(); 
            if(matrix[q][r] == target){
                return true;
            }else if(matrix[q][r] < target){
                left = middle + 1;
            }else{
                right = middle - 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()){
            return false;
        }
        return bs(matrix, 0, matrix.size() * matrix[0].size() - 1, target);
    }
};
