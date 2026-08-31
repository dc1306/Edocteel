class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size(),cnt = 0;
        unordered_map<int,int>mp;
        for(int i = 0;i < n;i ++){
            if(mp.find(k - nums[i])!= mp.end()){
                if(mp[k - nums[i]] == 1)mp.erase(k - nums[i]);
                else mp[k - nums[i]]--;
                cnt ++;
            }
            else{
                mp[nums[i]]++;
            }
        }
        return cnt;
    }
};