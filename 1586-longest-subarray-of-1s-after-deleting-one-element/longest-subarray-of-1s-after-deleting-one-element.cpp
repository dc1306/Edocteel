class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int l = 0,curr = 0;
        int cnt = 0, maxi = 0;
        int k = 1;
        while(curr < n){
            if(nums[curr] == 0)cnt++;
            if(cnt <= k)maxi = max(maxi, curr - l);
            if(cnt > k){
                if(nums[l] == 0)cnt--;
                l++;
            }
            curr++;
        }
        return maxi;
    }
};