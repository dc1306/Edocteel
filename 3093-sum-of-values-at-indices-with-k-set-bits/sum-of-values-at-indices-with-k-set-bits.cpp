class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0;i < n; i++){
            string bin = bitset<10>(i).to_string();
            int cnt = 0;
            for(int j = 0;j < bin.size();j++){
                if(bin[j] == '1')cnt++;
            }
            if(cnt == k)sum += nums[i];
        }
        return sum;
    }
};