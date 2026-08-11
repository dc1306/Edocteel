class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i = 0;i < n-1;i ++){
            mp[i] = i + nums[i];
        }
        int target = n-1;
        for(int i = n-2;i >= 0; i--){
            if(mp[i] >= target){
                target = i;
            }
        }
        return(!target);

    }
};