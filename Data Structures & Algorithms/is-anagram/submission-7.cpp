class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> count;
        if(s.size() != t.size()){
            return false;
        }
        for(char s_ : s){
            count[s_]++;
        }
        for(char t_ : t){
            count[t_]--;
        }
        for(auto a:s){
            if(count[a] != 0){
                return false;
            }
        }
        return true;
        
    }
};
