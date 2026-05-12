class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max = 0;
        unordered_set<int> set1;
        for(int i = 0; i < nums.size();i++){
            set1.insert(nums[i]);
        }
        for(int i = 0; i < nums.size();i++){
            int count = 0;
            if(set1.find(nums[i] - 1) == set1.end()){
                int temp = nums[i];
                count = 1;
                while(set1.find(temp + 1) != set1.end()){
                    temp++;
                    count++;
                }
                if(count>max){
                    max = count;
                }
            }
        }
        return max;
    }
};
