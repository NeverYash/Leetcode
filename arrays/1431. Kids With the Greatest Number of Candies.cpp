class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxCandies = 0;
        for(int candy : candies){
            maxCandies =max(maxCandies, candy); 
        }
        for(int candy : candies){
            result.push_back(candy+extraCandies >= maxCandies);
            
        }
        
        return result;
    }
};
