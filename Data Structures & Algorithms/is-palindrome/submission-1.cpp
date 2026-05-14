class Solution {
public:
    bool isalphaneumeric(char character){
        if(((character >= 'a') && (character <= 'z')) || ((character >= 'A') && (character <= 'Z')) || ((character >= '0') && (character <= '9'))){
            return true;
        }else{
            return false;
        }
    }
    char lower(char letter){
        return ('a' + (letter - 'A'));
    }
    bool isUpper(char letter){
        if((letter >= 'A') && (letter <= 'Z')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        
        while(i < j){
            while(!isalphaneumeric(s[i])){
                if(i >= j){
                }
                i++;
            }
            while(!isalphaneumeric(s[j])){
                j--;
            }
            if(i > j){break;}
            char left = s[i];
            char right = s[j];
            if(isUpper(left)){
                left = lower(left);
            }
            if(isUpper(right)){
                right = lower(right);
            }
            if(left != right){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
