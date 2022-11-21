class Solution {
public:
    // Binary Search
    int search(vector<int>& nums, int target) {
        int size_of_array = nums.size();
        int low = 0; //zeroth index
        int high = size_of_array - 1; //to get last index
        
        while(low <= high){        
            int mid = (low + high)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        } //end of while loop
        return -1; //returns -1 if low and high submerges and element is not found
    }
    
};