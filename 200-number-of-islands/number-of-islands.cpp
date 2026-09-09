class Solution {
public:
    void dfs(int r,int c, vector<vector<char>>& grid){
        int nr = grid.size();
        int nc = grid[0].size();

        grid[r][c] = 0;
        if(r-1 >= 0 && grid[r-1][c] == '1')dfs(r-1,c,grid);
        if(r+1 < nr && grid[r+1][c] == '1')dfs(r+1,c,grid);
        if(c-1 >= 0 && grid[r][c-1] == '1')dfs(r,c-1,grid);
        if(c+1 < nc && grid[r][c+1] == '1')dfs(r,c+1,grid);


    }
    int numIslands(vector<vector<char>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        if(n == 0)return 0;
        int ans = 0;
        for(int i = 0;i < n;i ++){
            for(int j = 0;j < m;j++){
                if(grid[i][j] == '1'){
                    ans++;
                    dfs(i,j,grid);
                }
            }
        }
        return ans;
        
    }
};