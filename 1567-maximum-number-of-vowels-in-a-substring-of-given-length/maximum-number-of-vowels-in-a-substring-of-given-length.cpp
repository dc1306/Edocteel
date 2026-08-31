class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int cnt = 0;
        int maxi;
        vector<int>val(n,0);
        for(int i = 0;i < n;i ++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                val[i] = 1;
                if(i < k)cnt++;
            }
        }
        maxi = cnt;
        for(int i = k;i < n;i ++){
            cnt += (val[i] - val[i-k]);
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};