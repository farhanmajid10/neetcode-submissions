class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> collection;
        for(int i = 0; i < numbers.size(); i++){
            if(collection.count(target-numbers[i])){
                return {collection[target-numbers[i]] + 1, i + 1};
            }
            collection[numbers[i]] = i;
        }
        return {};
    }
};
