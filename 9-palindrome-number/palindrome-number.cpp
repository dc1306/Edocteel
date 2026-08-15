class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)return 0;
        vector<int> s;
        while(x > 0){
            s.push_back(x%10);
            x = x/10;
        }
        int l = 0;
        int r = s.size()-1;
        while(true){
            if(l >= r)return 1;
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else return 0;
        }
        return 1;
    }
};