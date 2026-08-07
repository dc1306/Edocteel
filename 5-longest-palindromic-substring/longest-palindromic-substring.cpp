class Solution {
public:
    string expand(int i , int j , string s){
        int n = s.size();
        int left = i;
        int right = j;
        while(left >= 0 && right < n && s[left] == s[right]){
            left--;
            right++;
        }
        return s.substr(left+1, right - left -1);
    }
    string longestPalindrome(string s) {
        int n = s.size();
        int max_len = 0;
        string ans = "";
        for(int i = 0;i < n; i++){
            string odd = expand(i,i,s);
            if(odd.size() > max_len){
                max_len = odd.size();
                ans = odd;
            }  
            string even = expand(i,i+1,s);
            if(even.size() > max_len){
                max_len = even.size();
                ans = even;
            }            
        }
        return ans;
    }
};
// class Solution {
// public:
//     string longestPalindrome(string s) {
//         int n = s.size();
//         string t = s;
//         int max_val = 0;
//         int max_ind = 0;
//         reverse(s.begin(),s.end());
//         vector<vector<int>>dp(n+1,vector<int>(n+1,0));
//         for(int i = 1;i <= n; i++){
//             for(int j = 1;j <= n;j++){
//                 if(s[i-1] == t[j-1])dp[i][j] = dp[i-1][j-1] + 1;
//                 if(dp[i][j] > max_val){
//                     max_val = dp[i][j];
//                     max_ind = j;
//                 }
//                 cout << dp[i][j] << " " ;
//             }
//             cout << endl;
//         }
//         string ans = "";
//         for(int i = max_ind - max_val;i <= max_ind -1;i++){
//             ans.push_back(t[i]);
//         } 
//         return ans;
//     }
// };