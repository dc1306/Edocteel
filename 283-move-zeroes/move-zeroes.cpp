class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int r = n-1;
        int l = 0;
        vector<int>vec;
        for(int i = 0;i < n;i++){
            if(nums[i])vec.push_back(i);
        }
        for(auto i : vec){
            int temp = nums[l];
            nums[l++] = nums[i];
            nums[i] = temp;
        }
    }
};