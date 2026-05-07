class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int num:nums){
            m[num]++;
        }
        for(auto m_:m){
            if(m_.second == 1){
                return m_.first;
            }
        }
        return 0;
    }
};
