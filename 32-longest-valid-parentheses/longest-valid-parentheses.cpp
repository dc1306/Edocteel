class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        stack <pair<char, int>> st;
        int max_len = 0;
        st.push({'!',-1});
        for(int i = 0;i < n;i ++){
            if(st.top().first == '!' || s[i] == st.top().first || s[i] == '(')st.push({s[i],i});
            else st.pop();
        }
        st.push({'!', n});

        while(!(st.empty())){
            int temp = st.top().second;
            cout << temp << endl;
            st.pop();
            if(!(st.empty())){
                max_len = max(max_len, temp - st.top().second - 1);
                cout << temp << endl;
            }
        }
        return max_len;
    }
};