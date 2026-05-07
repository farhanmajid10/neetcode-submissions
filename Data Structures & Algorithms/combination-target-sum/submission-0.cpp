class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> result;
        vector<int> subset;
        int sum = 0;
        dfs(nums, 0, subset, result, target, sum);
        return result;
    }
    void dfs(vector<int>& nums, int i, vector<int> subset, vector<vector<int>>& result, int& target, int& sum){
            if(sum == target){
                result.push_back(subset);
                return;
            }else if(sum > target){
                return;
            }
            if(i == nums.size()){
                return;
            }
        subset.push_back(nums[i]);
        sum += nums[i];
        dfs(nums, i, subset, result, target, sum);
        sum -= nums[i];
        subset.pop_back();
        dfs(nums, i + 1, subset, result, target, sum);
    }
};
