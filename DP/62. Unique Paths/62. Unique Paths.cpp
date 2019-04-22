class Solution {
public:
    int uniquePaths(int m, int n) {
        int size[m][n];
              
        for (int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                 if(i == 0 || j == 0)
                size[i][j] = 1;
                else
                    
                size[i][j] = size[i-1][j] + size[i][j - 1];
            }             
        }        
        return  size[m-1][n-1];
    }
};