class Solution {
public:
    int f(int n, vector<int>& dp){
        if(dp[n] != -1)return dp[n];
        if(n == 1)return 1;
        else if(n == 2)return 2;
        else return dp[n] = f(n-1,dp) + f(n-2,dp);
    }
    int climbStairs(int n) {
        if (n == 0)return 0;
        vector<int>dp(n+1,-1);
        return f(n,dp);
    }
};