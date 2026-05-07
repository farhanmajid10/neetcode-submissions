class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        if(n == 0){return {0};}
        result.push_back(0);
        for(int i = 1; i <= n;i++){
            int count = 0;
            int n = i;
            while(n){
                if(n & 1){
                    count++;
                }
                n = n >> 1; 
            }
            result.push_back(count);
        }
        return result;
    }
};
