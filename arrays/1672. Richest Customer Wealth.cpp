class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sumArr[accounts.size()];
        
        for(int i=0;i<accounts.size();i++){
            int sum = 0;
            for(int j=0;j<accounts[i].size();j++){
                sum += accounts[i][j];
            }
            sumArr[i]=sum;
        }
        sort(sumArr,sumArr+accounts.size());
        return sumArr[accounts.size()-1];
    }
};