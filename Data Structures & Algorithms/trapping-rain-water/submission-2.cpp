class Solution {
public:
    int trap(vector<int>& height) {
        int maxl = 0;
        vector<int> ll(height.size());
        for(int i = 0; i < height.size(); i++){
        ll[i] = maxl;
        if(height[i] > maxl){
            maxl = height[i];
        }
        }

        int maxr = 0;
        vector<int> rl(height.size());
        for(int i = height.size() - 1; i >= 0; i--){
            rl[i] = maxr;
            if(height[i] > maxr){
                maxr = height[i];
            }
        }

        int total_area = 0;
        for(int i = 0; i < height.size(); i++){
            if(min(ll[i],rl[i]) > height[i]){
                total_area += min(ll[i],rl[i]) - height[i];
            }
        }
        return total_area;
    }
};
