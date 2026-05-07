class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int product = 1;
        int zero = 0;
        for(auto n:nums){
            if(n == 0){
                zero++;
            }else{
                product = product * n;
            }
        }
        for(auto s:nums){
            if(zero == 0){
                result.push_back(product/s);
            }else if(zero > 1){
                result.push_back(0);
            }else{
                if(s == 0){
                    result.push_back(product);
                }else{
                    result.push_back(0);
                }
            }
        }
        return result;
    }
};
