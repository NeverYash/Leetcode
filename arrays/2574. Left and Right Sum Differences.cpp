class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       
       int ps =0 ,ss =0;
        vector<int>res;
       for(auto &i: nums)
       ss +=i;

       for(auto &i : nums){
           ss -= i;
           res.push_back(abs(ss-ps));
           ps += i;
       }
        return res;
    }
};
