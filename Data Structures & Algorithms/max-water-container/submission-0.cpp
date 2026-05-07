class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxwater = 0;
        int i = 0, j = heights.size() - 1;
        while(i < j){
            int lower = min(heights[i], heights[j]);
            maxwater = max(maxwater, (j-i)*(lower));
            if(heights[i] < heights[j]){
                i++;
            }else{
                j--;
            }
        }
        return maxwater;
    }
};
