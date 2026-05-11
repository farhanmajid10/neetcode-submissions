class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left;
        vector<int> right;
        vector<int> result;
        
        int product = 1;
        left.push_back(1);
        for(int i = 1; i < nums.size(); i++){
            left.push_back(product * nums[i-1]);
            product *= nums[i - 1];
        }
        product = 1;
        right.insert(right.begin(), 1);
        for(int i = nums.size() - 2; i >= 0; i--){
            right.insert(right.begin(),(product * nums[i + 1]));
            product *= nums[i+ 1];
        }

        for(int i = 0; i < nums.size(); i++){
            result.push_back(left[i] * right[i]);
        }
        return result;
    }
};
