class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> m;
        string temp = {0};
        for(auto str:strs){
            temp = str;
            sort(temp.begin(),temp.end());
            m[temp].push_back(str);
        }
        for(auto v:m){
            result.push_back(v.second);
        }
        return result;
    }
};
