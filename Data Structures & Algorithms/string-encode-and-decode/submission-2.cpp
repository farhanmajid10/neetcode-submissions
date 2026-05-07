class Solution {
public:

    string encode(vector<string>& strs) {
        ostringstream result;
        for( auto s:strs){
            result << s.size() << '#' << s;
        }
        return result.str();
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            /*Main confusion: what are the inputs and outputs of stoi and 
            substr with stoi, you can pass the whole substr which is what 
            we are taking advantage of here.
            Again, for the substr, you just give it the starting index 
            and the length in this order and thats it.
            */
            int length = stoi(s.substr(i, j - i));
            string sub = s.substr(j + 1, length);
            result.push_back(sub);
            i = j + 1 + length;
        }
        return result;
    }
};
