class Solution {
public:
    int f(string s, int n, vector<int>&dp){
        if(dp[n] != -1)return dp[n];
        if(n == 1 || n == 0)return 1;
        string new_str1 = s.substr(0,n-2);
        string new_str2 = s.substr(0,n-1);
        dp[n-1] = f(new_str2, n-1,dp);
        if(s[n-2] == '1' || (s[n-2] == '2' && s[n-1] < '7')){
            dp[n-2] = f(new_str1, n-2,dp);
            if(s[n-1] == '0')return dp[n-2];
            return dp[n-1] + dp[n-2];
        }
        else{
            return dp[n-1];
        } 
        
    }
    int numDecodings(string s) {
        int n = s.size();
        vector<int>dp(n+1,-1);
        if(n == 0 || s[0] == '0')return 0;
        for(int i = 1;i < n; i++){
            if(s[i] == '0' && (s[i-1] != '1' && s[i-1] != '2')){
                return 0;
            }
        }
        return f(s,n,dp);
    }
};