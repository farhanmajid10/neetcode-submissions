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
        int count = 1;
        if(!m.count(templeft)){
            while(m.count(tempright)){
                tempright++;
                count++;
            }
            if(result < (count)){
                result = count;
            }    
        }
        
    }
    return result;
    }
};
