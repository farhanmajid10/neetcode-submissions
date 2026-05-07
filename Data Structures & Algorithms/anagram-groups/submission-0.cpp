class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(int i = 0; i < strs.size(); i++){
            string key = findkey(strs[i]);
            m[key].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto it = m.begin(); it != m.end(); it++){
            result.push_back(it->second);
        }
        return result;
    }
private:
        string findkey(string s){
            vector<int> count(26);
            string key = "";
            for(int i = 0; i < s.size(); i++){
                count[s[i] - 'a']++;
            }
            for(int i = 0; i < count.size(); i++){
                key.append(to_string(count[i]) + '#');
            }
            return key;
        }
};
