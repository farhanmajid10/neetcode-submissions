class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }
        vector<int> result;
        while(k != 0){
            int max = INT_MIN;
            int maxnum;
            for(auto s:m){
                if(max < s.second){
                    max = s.second;
                    maxnum = s.first;
                }
            }
            result.push_back(maxnum);
            k--;
            m.erase(maxnum);
        }
        return result;
    }
};
