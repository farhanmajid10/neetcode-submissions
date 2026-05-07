class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int num:nums){
            m[num]++;
        }

        vector<vector<int>> s(nums.size() + 1);
        for(auto m_:m){
            s[m_.second].push_back(m_.first);
        }

        vector<int> result;
        for(int i = nums.size(); i >= 0; i--){
            while(!s[i].empty()){
                int temp = s[i].back();
                s[i].pop_back();
                result.push_back(temp);
            }
            if(result.size() == k){
                return result;
            }
        }
        return result;
    }
};
