class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //count of each element.
        vector<int> result;
        unordered_map<int,int> map1;
        for(auto num:nums){
            map1[num]++;
        }
        map<int,vector<int>>map2;
        for(auto map:map1){
            map2[map.second].push_back(map.first);
        }
        for(auto i = map2.rbegin(); i != map2.rend(); i++){
            while((!i->second.empty()) && (k!=0)){
                    result.push_back(i->second.back());
                    i->second.pop_back();
                    k--;
            }
        }
        return result;
    }
};
