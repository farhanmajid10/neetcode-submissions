class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int biggest = nums.size();
        int sum = 0;
        for(int num:nums){
            sum += num;
        }
        int actual_sum = ((biggest) * (biggest+1))/2;
        return actual_sum - sum;
    }
};
