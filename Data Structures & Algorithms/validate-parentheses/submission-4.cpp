class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> m = {{')','('},{'}','{'},{']','['}};
        for(auto c:s){
            if(m.find(c) != m.end()){
                if(stk.empty()){
                    return false;
                }
                char top = stk.top();
                if(top != m[c]){
                    return false;
                }
                stk.pop();
            }else{
                stk.push(c);
            }
        }
        return stk.empty();
    }
};
