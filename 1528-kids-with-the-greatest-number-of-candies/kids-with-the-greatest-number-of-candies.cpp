class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = 0;
        vector<bool>ans(candies.size(),true);
        for(int i = 0;i < candies.size();i ++){
            maxi = max(maxi,candies[i]);
        }
        int p = maxi - extraCandies;
        for(int i = 0;i < candies.size();i ++){
            if(candies[i] < p)ans[i] = false;
        }
        return ans;
    }
};