class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> result;
        for(int num:nums){
            m[num]++;
        }
        vector<vector<int>> temp(nums.size() + 1);
        for(auto m_:m){
            temp[m_.second].push_back(m_.first);
        }

        for(int i = nums.size(); i >= 0; i--){
            if(result.size() != k){
                while(!temp[i].empty()){
                    result.push_back(temp[i].back());
                    temp[i].pop_back();
                }
            }else{
                return result;
            }
        }
    }
};
