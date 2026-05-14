class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < (nums.size() - 2);i++){
            if((i!= 0) && (nums[i] == nums[i - 1])){ continue;}
            int j = i + 1, k = nums.size() - 1;
            while(j < k){
                int sum = (nums[i] + nums[j] + nums[k]);
                if(sum == 0){
                    if((j < (k-1)) && (nums[k] == nums[k - 1])){
                        k--;
                        continue;
                        }
                    if(((j+1) < k) && (nums[j] == nums[j+1])){
                        j++;
                        continue;
                        }
                    result.push_back({nums[i],nums[j],nums[k]});
                    j++,k--;
                }
                else if(sum > 0){
                    k--;
                }else if(sum < 0){
                    j++;
                }
            }
        }
        return result;
    }
};
