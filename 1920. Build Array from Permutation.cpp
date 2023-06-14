class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
//  creating a new vector
        vector<int> result;
        for(int i=0;i<nums.size();i++){
//           storing every value of nums[nums[i]] in result
            result.push_back(nums[nums[i]]);
        }
        return result;
    }

};
