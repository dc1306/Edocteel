class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int gap = 1;
        int maxi = 0;
        int len = flowerbed.size();
        for(int i = 0;i < len; i++){
            if(flowerbed[i] == 0)gap++;
            else{
                maxi += max((gap-1)/2,0);
                gap = 0;
            }
        }
        maxi += max((gap)/2,0);
        return (maxi >= n);

        
    }
};