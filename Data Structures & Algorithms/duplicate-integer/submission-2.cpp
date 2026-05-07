class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> x;
        for(int num:nums){
            if(!x.count(num)){
                x.insert(num);
            }else{
                return true;
            }
        }
        return false;
    }
};