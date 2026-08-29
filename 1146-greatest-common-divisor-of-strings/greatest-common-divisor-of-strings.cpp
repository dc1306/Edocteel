class Solution {
public:
    int hcf (int n, int m){
        if(n % m == 0)return m;
        return hcf(m, n%m);
    }
    string gcdOfStrings(string str1, string str2) {
        int i = 0,j = 0;
        int n = str1.size(), m = str2.size();
        int t = hcf(n,m);
        string ans = "";
        while(i < t && j < t){
            if(str1[i] != str2[j])break;
            ans += str1[i];
            i++;
            j++;
        }
        string temp1 = "",temp2 = "";
        for(int i = 0;i < (n/t);i ++){
            temp1 += ans;
        }
        for(int i = 0;i < (m/t);i ++){
            temp2 += ans;
        }

        if(temp1 == str1 && temp2 == str2)return ans;
        return (string)"";
    }
};