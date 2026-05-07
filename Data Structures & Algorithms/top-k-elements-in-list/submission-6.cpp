class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map_;
        for(int num:nums){
            map_[num]++;
        }

        vector<vector<int>> groups(nums.size() + 1);
        for(auto m:map_){
            groups[m.second].push_back(m.first);
        }

        vector<int> result;
        for(int i = nums.size(); i >= 0; i--){
            if(result.size() < k){
                while(!groups[i].empty()){
                    result.push_back(groups[i].back());
                    groups[i].pop_back();
                }
            }else{
                return result;
            }
        }
        return result;
    }
};
