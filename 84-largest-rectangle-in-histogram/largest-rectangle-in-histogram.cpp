class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack <int> st;
        st.push(-1);
        int maxi = 0;
        for(int i = 0;i < n;i ++){
            while(st.top() != -1 && heights[st.top()] >= heights[i]){
                int curr_height = heights[st.top()];
                st.pop();
                int curr_width = i - st.top() - 1;
                maxi = max(maxi, curr_height * curr_width);
            }
            st.push(i);
        }
        while(st.top() != -1){
            int curr_height = heights[st.top()];
            st.pop();
            int curr_width = heights.size() - st.top() - 1;
            maxi = max(maxi, curr_height * curr_width);
        }


        return maxi;
    }
};