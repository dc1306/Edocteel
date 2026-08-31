class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        int maxi;
        for(int i = 0;i < k;i++){
            cnt += nums[i];
        }
        maxi = cnt;
        for(int i = k;i < n;i ++){
            cnt += (nums[i] - nums[i-k]);
            maxi = max(cnt,maxi);
        }
        return (double)maxi/k;
    }
};