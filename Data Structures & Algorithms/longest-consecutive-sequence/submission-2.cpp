class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(), nums.end());
        int max = 0;
        int cmax = 1;
        for(auto n:numset){
            cmax = 1;
            if(!numset.count(n-1)){
                int j = n;
                while(numset.count(j+1)){
                    cmax++;
                    j++;
                }
                if(cmax>max){
                    max = cmax;
                }
            }
        }
        return max;
    }
};
