class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(string str:strs){
            result += "*";
            result += to_string(str.length());
            result += "*";
            result += str;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        for(int i = 0; i < s.length();i++){
            if(s[i] == '*'){
                i++;
                string temp = "";
                while(s[i] != '*'){
                    temp+= s[i];
                    i++;
                }
                i++;
                int tempint = stoi(temp);
                string strs = "";
                while(tempint != 0){
                    strs += s[i];
                    i++;
                    tempint--;
                }
                result.push_back(strs);
            }
            i--;
        }
        return result;
    }
};
