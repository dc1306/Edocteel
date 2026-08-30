class Solution {
public:
    int compress(vector<char>& chars) {
        string ans = "";
        int cnt = 0;
        char curr = chars[0];
        for(int i=0; i<chars.size(); i++)
        {
            if(chars[i]==curr) cnt++;
            else
            {
                string add = curr + to_string(cnt);
                if(cnt>1) ans+=add;
                else ans+=curr;
                cnt = 1;
                curr = chars[i];
            }
        }
        string add = curr + to_string(cnt);
        if(cnt>1) ans+=add;
        else ans+=curr;
        for(int i=0; i<ans.size(); i++)
        {
            chars[i] = ans[i];
        }
        return ans.size();
    }
};