class Solution {
public:
    int reverse(int x) {
        string ans;
        string flag = "";
        if(x == -2147483648)return 0;
        long long MOD = pow(2,31);
        if(x < 0)flag = '-';
        x = abs(x);
        ans = to_string(x);
       
        std::reverse(ans.begin(),ans.end());
        long long p = stoll(flag+ans);
        cout << p << endl << MOD;
        if(abs(p) > MOD)return 0;
        return (int)p;
    }
};