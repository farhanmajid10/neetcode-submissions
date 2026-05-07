class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> s_m;
        unordered_map<char,int> t_m;
        for(char s_ : s){
            s_m[s_]++;
        }
        for(char t_ : t){
            t_m[t_]++;
        }
        for(auto a:s){
            if(s_m[a] != t_m[a]){
                return false;
            }
        }
        for(auto a:t){
            if(s_m[a] != t_m[a]){
                return false;
            }
        }
        return true;
        
    }
};
