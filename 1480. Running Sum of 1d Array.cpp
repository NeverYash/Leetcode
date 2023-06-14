class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
//       for storing result
        vector<int> result;
// storing element at first index
        result.push_back(nums[0]);
        int sum = nums[0];
        for(int i=1;i<nums.size();i++){
            sum += nums[i];
            result.push_back(sum);
        }
        return result;
    }
};
