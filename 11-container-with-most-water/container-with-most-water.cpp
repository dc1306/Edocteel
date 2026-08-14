class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        vector<pair<int,int>>vec;
        int maxi = 0;
        for(int i = 0;i < n; i++){
            for(int j = 0;j < vec.size();j++){
                ans = max(ans,((i -vec[j].first) * min(vec[j].second, height[i])));
            }
            if(height[i] > maxi){
                vec.push_back({i,height[i]});
                maxi = height[i];
            }
        }
        return ans;
    }
};