class Solution {
public:
    int countTestedDevices(vector<int>& b) {
        int ans = 0;
        int n = b.size();
        int cnt = 0;
        for(int i = 0;i < n;i++){
            if(b[i] - i + cnt > 0)ans++;
            if(b[i] - i + cnt <= 0)cnt++;
        }
        return ans;

    }
};