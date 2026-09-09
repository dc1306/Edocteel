class Solution {
public:
    vector<int> maxSubsequence(vector<int> nums, int k) {
        int n = nums.size();
        vector<int> ori;
        for(int i = 0;i < n;i ++){
            ori.push_back(nums[i]);
        }
        sort(nums.begin(),nums.end(),greater<int>());
        unordered_map <int,int> mp;
        vector<int>ans;
        for(int i = 0;i < k;i++){
            mp[nums[i]]++;
        }
        for(int i = 0;i < n;i ++){
            if(mp.find(ori[i]) != mp.end()){
                ans.push_back(ori[i]);
                mp[ori[i]]--;
                if(mp[ori[i]] == 0)mp.erase(ori[i]);
            }
        }
        return ans;
    }
};