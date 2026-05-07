class Solution {
public:
    int quickSelect(vector<int>& nums, int start, int end, int k){
        if(start == end){
            nums[start];
        }
            int partitionIndex = partition(nums, start, end);
            if(partitionIndex == nums.size() - k){
                return nums[partitionIndex];
            }else if(partitionIndex < nums.size() - k){
                return quickSelect(nums, partitionIndex + 1, end, k);
            }else{
                return quickSelect(nums, start, partitionIndex - 1, k);
            }
        return -1;        
    }

    int partition(vector<int>& nums, int start, int end){
        int pivotIndex = start + rand() % (end - start + 1);
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
        return quickSelect(nums, 0, nums.size() - 1, k); 
    }
};
