class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int l = 0,r = n-1;
        set <char> st = {'a','e','i','o','u','A','E','I','O','U'};
        while(l <= r){
            if(st.find(s[l]) != st.end() && st.find(s[r]) != st.end()){
                char temp = s[r];
                s[r] = s[l];
                s[l] = temp;
                l++;r--;
            }
            else if(st.find(s[l]) != st.end()){
                r--;
            }
            else if(st.find(s[r]) != st.end()){
                l++;
            }
            else {
                r--;l++;
            }
        }
        return s;
    }
};