class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ct =0;
        bool flag;
        for(int i=0;i<nums.size()-1;i++){
             if (nums[i]==nums[i+1])
             ct++;
        }
        if(ct==0)
        return false;
        else
        return true;
    }
};
