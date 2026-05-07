class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int product = 1;
        int zero_count = 0;
        for(int num:nums){
            if(num == 0){
                zero_count++;
            }else{
                product = num * product;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(zero_count > 1){
                result.push_back(0);
            }else if(zero_count == 1){
                if(nums[i] != 0){
                    result.push_back(0);
                }else{
                    result.push_back(product);
                }
            }else{
                result.push_back((int)(product/nums[i]));
            }
        }
        return result;
    }
};
