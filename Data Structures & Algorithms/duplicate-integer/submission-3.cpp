class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto num:nums){
            m[num]++;
            if(m[num] == 2){
                return true;
            }
        }
        return false;
    }
};