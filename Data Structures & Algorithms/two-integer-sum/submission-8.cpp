class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> m;
        m[nums[0]].push_back(0);
        for(int i = 1; i < nums.size();i++){
            if(m.find(target-nums[i]) != m.end()){
                return {m[target - nums[i]][0],i};
            }else{
                m[nums[i]].push_back(i);
            }
        }
        return {};
    }
};
