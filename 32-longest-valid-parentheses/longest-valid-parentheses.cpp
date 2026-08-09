class Solution {
public:
    int longestValidParentheses(string s) {
        // int n = s.size();
        // int l = 0;
        // int max_len = 0;
        // int curr = 0;
        // int open = 0;
        // int close = 0;

        // while(curr < s.size()){
        //     if(s[curr] == '(')open++;
        //     else close ++;

        //     if(close == open){
        //         max_len = max(max_len, curr - l + 1);
        //     }

        //     if(close > open){
        //         if(s[l] == '(')open--;
        //         else close--;
        //         l++;
        //     }

        //     curr++; 
        // }
        // l = n-1;
        // curr = n-1;
        // open = 0;
        // close = 0;
        // while(curr >= 0){
        //     if(s[curr] == '(')open++;
        //     else close ++;

        //     if(close == open){
        //         max_len = max(max_len, l - curr + 1);
        //     }

        //     if(close < open){
        //         if(s[l] == '(')open--;
        //         else close--;
        //         l--;
        //     }

        //     curr--; 
        // }
        // return max_len;
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