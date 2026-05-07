class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //prefix:
        vector<int> prefix(nums.size());
        int product = 1;
        for(int i = 0; i < nums.size(); i++){
            product = nums[i]*product;
            prefix[i] = product;
        }
        //postfix:
        vector<int> postfix(nums.size());
        product = 1;
        for(int i = nums.size() - 1; i >= 0 ; i--){
            product = product * nums[i];
            postfix[i] = product;
        }

        //result:
        vector<int> result;
        for(int i = 0; i < nums.size(); i++){
            if(i==0){
                result.push_back(postfix[1]);
            }else if(i == nums.size() - 1){
                result.push_back(prefix[nums.size() - 2]);
            }else{
                result.push_back(prefix[i-1] * postfix[i + 1]);
            }
        }
        return result;
    }
};
