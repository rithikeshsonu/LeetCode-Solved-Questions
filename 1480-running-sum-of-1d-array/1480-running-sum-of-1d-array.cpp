class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){
            nums[i] = nums[i - 1] + nums[i];
        }
        return nums;
        // vector<int> res; //Create a new array
        // //result[0] = nums[0]; 
        // for(int i = 1; i < res.size(); i++){
        //     res[0] = nums[0];
        //     res[i] = nums[i-1] + nums[i];
        // }
        // return res;
    }
};

