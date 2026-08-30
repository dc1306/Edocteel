class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size(), m = t.size();
        int i = 0, j = 0;
        if(n == 0)return true;
        if(m == 0)return false;
        while(j < m){
            if(s[i] == t[j]){
                i++;
                j++;
            }
            else j++;
            if(i == n)return true;
        }
        return false;
    }
};