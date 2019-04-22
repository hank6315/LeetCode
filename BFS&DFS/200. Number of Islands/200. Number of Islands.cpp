class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty()) return 0;
        
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for(int y = 0; y < m; y++)
        {
            for(int x = 0 ; x < n; x++)
            {
                if(grid[y][x] == '1')
                {
                    ++ans;
                    dfs(grid,x,y,m,n);
                }
            }
        }
        
        return ans;
    }
    
    void dfs(vector<vector<char>>& grid , int x , int y , int m , int n)
    {
        if(x < 0 || y < 0 || x >= n || y >= m || grid[y][x]== '0')
            return;
        grid[y][x] = '0';
        dfs(grid,x + 1,y,m,n);
        dfs(grid,x - 1,y,m,n);
        dfs(grid,x,y + 1,m,n);
        dfs(grid,x,y - 1,m,n);
    }
};