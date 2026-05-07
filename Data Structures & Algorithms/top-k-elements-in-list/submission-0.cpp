class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int, int> m;//number, frequecy
        for(const auto& n:nums){
            m[n]++;
        }
        while(k != 0){
            int max = 0;
            int num;
            for(auto it = m.begin(); it!= m.end(); it++){
                if(max < it->second){
                    max = it->second;
                    num = it->first;
                }
            }
            result.push_back(num);
            m.erase(num);
            k--;
        }
        return result;
    }
};
