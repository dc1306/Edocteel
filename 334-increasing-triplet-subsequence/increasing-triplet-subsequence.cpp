class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        vector<int>premin(n);
        int mini = INT_MAX;
        for(int i = 0;i < n; i++){
            if(nums[i] < mini){
                mini = nums[i];
            }
            premin[i] = mini;
        }
        int maxi = INT_MIN;
        for(int i = n-1;i >= 0; i--){
            if(maxi > nums[i] && nums[i]> premin[i])return true;
            if(nums[i] > maxi){
                maxi = nums[i];
            }
        }
        return false;
    }
};