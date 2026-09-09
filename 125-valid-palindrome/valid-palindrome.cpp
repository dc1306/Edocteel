class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string t = "";
        for(int i = 0;i < n;i ++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
                t.push_back(tolower(s[i]));
            }
            else if(s[i] >= '0' && s[i] <= '9')t.push_back(s[i]);

        }
        string u = t;
        reverse(u.begin(),u.end());
        if(u == t)return true;
        return false;
    }
};