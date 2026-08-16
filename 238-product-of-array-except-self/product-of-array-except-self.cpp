class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        int prod2 = 1;
        int zeros = 0;
        vector<int>ans(n);
        for(int i = 0;i < n; i++){
            prod *= nums[i];
            if(nums[i] != 0)prod2 *= nums[i];
            if(nums[i] == 0)zeros++;
        }
        if (zeros == n)prod2 = 0;
        if(zeros > 1){
            fill(ans.begin(), ans.end(),0);
            return ans;
        }
        for(int i = 0;i < n;i ++){
            if(nums[i] == 0)ans[i] =prod2;
            else ans[i] = prod/ nums[i];
        }
        return ans;
    }
};