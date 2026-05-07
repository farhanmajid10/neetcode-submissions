class Solution {
public:
    int quickselect(vector<int>& nums, int start, int end, int k){
        if(start == end){
            return nums[start];
        }
        int pivotIndex = partition(nums, start, end);
        if(pivotIndex == nums.size() - k){
            return nums[pivotIndex];
        }else if(pivotIndex < nums.size() - k){
            return quickselect(nums, pivotIndex + 1, end, k);
        }else{
            return quickselect(nums, start, pivotIndex - 1, k);
        }
        return -1;
    }
    int partition(vector<int>& nums, int start, int end){
        int pivotIndex = start + std::rand() % (end - start + 1);
        int pivot = nums[pivotIndex];
        std::swap(nums[pivotIndex], nums[end]);
        int i = start - 1;
        for(int j = start; j < end; j++){
            if(nums[j] <= pivot){
                std::swap(nums[j], nums[++i]);
            }
        }
        std::swap(nums[++i], nums[end]);
        return i;
    }
    int findKthLargest(vector<int>& nums, int k) {
        return quickselect(nums, 0, nums.size() - 1, k);
    }
};
