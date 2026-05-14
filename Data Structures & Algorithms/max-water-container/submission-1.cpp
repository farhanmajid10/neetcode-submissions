class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0, j = heights.size() - 1;
        int maximum = 0;
        while(i < j){
            int area = min(heights[i],heights[j]) * (j-i); 
            maximum = max(area,maximum);
            if(heights[i] < heights[j]){
                i++;
            }else if(heights[j] <= heights[i]){
                j--;
            }
        }
        return maximum;
    }
};
