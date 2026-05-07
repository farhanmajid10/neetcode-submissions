class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
//put it in a set and then go through the list and do a find inside the set you get the max value.
//It's not going to be O(n) but it'll be a solution.

    unordered_set<int> m;
    for(int num:nums){
        m.insert(num);
    }
    int result = 0;
    for(int num:nums){
        int templeft = num - 1;
        int tempright = num + 1;
        int leftcount = 0;
        int rightcount = 1;
        while(m.count(templeft)){
            templeft--;
            leftcount++;
        }
        while(m.count(tempright)){
            tempright++;
            rightcount++;
        }
        if(result < (leftcount + rightcount)){
            result = leftcount+rightcount;
        }
    }
    return result;
    }
};
