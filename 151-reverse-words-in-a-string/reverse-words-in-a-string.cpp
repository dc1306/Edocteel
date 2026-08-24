class Solution {
public:
    string reverseWords(string s) {
        vector<string>strs;
        int n = s.size();
        string curr_string = "";
        for(int i = 0;i < n;i ++){
            if(s[i] == ' '){
                if(curr_string.size() > 0){
                    strs.push_back(curr_string);
                    curr_string = "";
                }
            }
            else curr_string = curr_string + s[i];
        }
        if(curr_string.size() > 0)strs.push_back(curr_string);
        string ans = "";
        for(int i = strs.size()-1;i >= 0;i --){
            //cout << strs[i].size() << endl;
            ans = ans + strs[i];
            if(i)ans += ' ';
        }
        return ans;
    }
};