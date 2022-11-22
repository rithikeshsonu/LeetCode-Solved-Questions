class Solution {
public:    

   
    int searchInsert(vector<int>& nums, int target) { 
        int high = nums.size() - 1;
        int low = 0;
        
        while(low <= high){
        int mid = (low + high)/2;
        if(target == nums[mid]){
            return mid;
        }
        if(target > nums[mid]){
            low = mid + 1;
        }
        else if(target < nums[mid]){
            high = mid - 1;
        }
    }
    return low;
   } 
};