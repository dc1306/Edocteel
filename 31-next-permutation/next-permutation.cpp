class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int p = n-2;
        int flag = 1;
        for(int i = n-2;i >=0;i --){
            if(nums[i] < nums[i+1]){
                p = nums[i];
                int l = i+1;
                int r = n-1;
                int ans = i+1;
                while(l <= r){
                    int mid = l + (r-l)/2;
                    if(nums[mid] > p){
                        ans = mid;
                        l = mid+1;
                    }
                    else r = mid - 1;
                }
                nums[i] = nums[ans];
                nums[ans] = p;
                reverse(nums.begin() + i+1,nums.end());
                flag = 0;
                break;
            } 

        }
        if(flag)reverse (nums.begin(),nums.end());
    }
};