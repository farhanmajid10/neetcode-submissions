class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> m;
        for(auto str:strs){
            string temp = str;
            sort(temp.begin(),temp.end());
            m[temp].push_back(str);
        }
        for(auto m_:m){
            result.push_back(m_.second);
        }
        return result;
    }
};
