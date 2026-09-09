class Solution {
public:
    string shortestPalindrome(string s) {
        int n = s.size();
        if(n == 0)return s;
        string rev = s;
        reverse(rev.begin(),rev.end());
        for(int i = 0;i < n;i ++){
            if(!memcmp(s.c_str(),rev.c_str() + i, n-i)){
                return rev.substr(0,i) + s;
            }
        }
        return rev + s.substr(1,n-1);
    }
};