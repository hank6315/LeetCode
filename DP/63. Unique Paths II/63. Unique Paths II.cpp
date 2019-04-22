class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        
        if (m== 0 || n == 0)
			return 0;
 
		vector<unsigned int> dp(n);
		dp[0] = 1;
        
        for(int i = 0; i < m; i++)
        {
             for(int j = 0; j < n; j++)
            {
                //if the [i][j] == 1 , d[j] = 0
                if(obstacleGrid[i][j] == 1)
                    dp[j] = 0;
                else
                {
                    if(j>0) dp[j] = dp[j] + dp[j - 1];
                }
            }
        }
           
        
        return dp[n - 1];
    }
};