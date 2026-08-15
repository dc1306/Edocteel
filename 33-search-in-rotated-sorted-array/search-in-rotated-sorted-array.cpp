class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        if (nums[0] <= nums[n-1]){
            while(l <= r){
                int mid = l + (r-l)/2;
                if(nums[mid] == target)return mid;
                else if(nums[mid] > target){
                    r = mid - 1;
                }
                else l = mid + 1;
            }
            return -1;
        }
        int last = 0;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(nums[mid] < nums[0] ){
                r = mid-1;
                last = mid-1;
            }
            else l = mid+1;
        }
        if(target >= nums[0]){
            l = 0;
            r = last;
        }
        else {
            l = last+1;
            r = n-1;
        }
        cout << nums[last] << " "<< last << " "<< l << " "<< r ;
        while(l <= r){
            int mid = l + (r-l)/2;
            if(nums[mid] == target)return mid;
            else if(nums[mid] > target){
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return -1;
    }
};