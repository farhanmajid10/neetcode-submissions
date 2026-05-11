class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(string str:strs){
            string temp = to_string(str.length());
            result += temp;
            result += '#';
            result += str;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string len = "";
        string each_str = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '#'){
                int count = stoi(len);
                while(count){
                    i++;
                    each_str += s[i];
                    count--;
                }
                result.push_back(each_str);
                each_str = "";
                len = "";
            }else{
                len += s[i];
            }
        }
        return result;
    }
};
