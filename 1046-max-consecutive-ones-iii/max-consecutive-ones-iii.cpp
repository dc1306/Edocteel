class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0,curr = 0;
        int cnt = 0, maxi = k;
        while(curr < n){
            if(nums[curr] == 0)cnt++;
            if(cnt <= k)maxi = max(maxi, curr - l +1);
            if(cnt > k){
                if(nums[l] == 0)cnt--;
                l++;
            }
            curr++;
        }
        return maxi;
       
    }
};