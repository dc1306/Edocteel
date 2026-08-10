class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)return 0;
        int jump = 1;
        unordered_map<int,int> mp;
        for(int i = 0;i < n; i++){
            mp[i] = i + nums[i];
        }
        int curr_pos = 0;
        while(mp[curr_pos] < n-1){
            int maxi = 0;
            int max_ind = curr_pos + 1;
            for(int j = curr_pos + 1;j <= mp[curr_pos];j++){
                if (mp[j] > maxi){
                    maxi = mp[j];
                    max_ind = j;
                }
            }
            curr_pos = max_ind;
            jump++;
        }
        return jump;
    }
};