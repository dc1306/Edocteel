class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,0));
        dp[0][0] = 1;
        for(int i = 1 ;i <= m; i++){
            if(p[i-1] == '*' &&(dp[i-1][0] == 1 || dp[i-2][0] == 1)){
                dp[i][0] = 1;
            }
        }
        for(int i = 1;i <= m; i++){
            if(p[i-1] == '*'){
                if(p[i-2] == '.'){
                    int j = 1;
                    while(j <= n && dp[i-1][j] != 1 && dp[i-2][j] != 1 ){
                        j++;
                    }
                    while(j <= n){
                        dp[i][j] = 1;
                        j++;
                    }
                }
                else{
                    int j = 1;
                    while(j <= n){
                        if(dp[i-2][j] || dp[i-1][j] == 1 || (dp[i][j-1] == 1 && s[j-1] == p[i-2])){
                            dp[i][j] = 1;
                        }
                        j++;
                    }
                }
               
            }
            else if(p[i-1] == '.'){
                int j = 1;
                while(j <= n){
                    if(dp[i-1][j-1] == 1)dp[i][j] = 1;
                    j++;
                }
            }
            else{
                int j = 1;
                while(j <= n){
                    if(dp[i-1][j-1] == 1 && p[i-1] == s[j-1])dp[i][j] = 1;
                    j++;
                }
            }
                
        }
        return dp[m][n];
    }
};