class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int>vec1(n),vec2(n);
        vec1[0] = 1;
        vec2[n-1] = 1;
        int sum = 0;
        for(int i = 0;i < n-1; i++){
            if(ratings[i] < ratings[i+1]){
                vec1[i+1] = vec1[i]+1;
            }
            else vec1[i+1] = 1;

        }
        for(int i = n-1;i > 0; i--){
            if(ratings[i] < ratings[i-1]){
                vec2[i-1] = vec2[i]+1;
            }
            else vec2[i-1] = 1;
        }
        for(int i = 0;i < n;i ++){
            sum += max(vec1[i],vec2[i]);
        }
        return sum;
    }
};