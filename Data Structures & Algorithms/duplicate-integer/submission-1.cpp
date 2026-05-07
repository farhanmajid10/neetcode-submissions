class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> x;
        for(int i = 0; i < nums.size(); i++){
            if(!x.count(nums[i])){
                x.insert(nums[i]);
            }else{
                return true;
            }
        }
        return false;
    }
};