class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for(string str:strs){
            result += to_string(str.length()) + '#' + str;
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while(i < s.length()){
            int delimpos = s.find('#', i);
            int len = stoi(s.substr(i, delimpos - i));
            string str = s.substr(delimpos + 1, len);
            result.push_back(str);
            i = delimpos + len + 1;
        }

        return result;
    }
};
