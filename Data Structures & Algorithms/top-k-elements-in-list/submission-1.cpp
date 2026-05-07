class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        vector<vector<int>> freq(nums.size() + 1);
        vector<int> result;
        for(int c:nums){
            count[c]++;
        }
        for(const auto& c:count){
            freq[c.second].push_back(c.first);
        }
        for(int i = freq.size() - 1; i > 0; i--){
            for(int n:freq[i]){
                result.push_back(n);
                if(result.size() == k){
                return result;
                }
            
            }
        }
        return result;
    }
};
