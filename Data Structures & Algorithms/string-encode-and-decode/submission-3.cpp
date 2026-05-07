class Solution {
public:

    string encode(vector<string>& strs) {
        ostringstream s;
        for(auto c:strs){
            s << c.size() << '#' << c;
        }
        return s.str();
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            string str = s.substr(j + 1, length);
            result.push_back(str);
            i = j + 1 + length;
        }
        return result;
    }
};
