class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mini = 0;
        int maxi = 0;
        int max_diff = 0;
        int max_ele = INT_MIN;
        int n = nums.size();
        int sum = 0;
        if(n == 1)return nums[0];
        vector<int>vec(n+1);
        vec[0] = 0;
        for(int i = 1;i < n+1; i++){
            max_ele = max(max_ele, nums[i-1]);
            sum += nums[i-1];
            vec[i] = sum;
            maxi = max(vec[i],maxi);
            max_diff = max(max_diff,(maxi - mini));
            if(vec[i] < mini){
                mini = vec[i];
                maxi = mini;
            }
        }
        // for(int i = 0;i <= n;i ++){
        //     cout << vec[i] << " ";
        // }
        if(max_diff == 0)return max_ele;
        return max_diff;
    }
};