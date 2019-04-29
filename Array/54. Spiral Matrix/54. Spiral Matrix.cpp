class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        if (matrix.empty() || matrix.size() == 0 || matrix[0].size() == 0) {
            return ans;
        }
        
        int rowBegin = 0;//行
        int rowEnd = matrix.size() -1;
        int colBegin =  0;//列
        int colEnd = matrix[0].size() -1;

       
        while(rowBegin <= rowEnd && colBegin <= colEnd)
        {
            for(int i = colBegin ; i <= colEnd; i++)
                ans.push_back(matrix[rowBegin][i]);
            
            rowBegin++;
            
            for(int i = rowBegin ; i <=rowEnd; i++)
                ans.push_back(matrix[i][colEnd]);
            
            colEnd--;
            
             if (rowBegin <= rowEnd){
                 for(int i = colEnd; i >= colBegin; i--)
                ans.push_back(matrix[rowEnd][i]);
             }

            rowEnd--;
            
            if (colBegin <= colEnd) {
                // Traver Up
                for (int j = rowEnd; j >= rowBegin; j --) {
                    ans.push_back(matrix[j][colBegin]);
                }
            }          
            colBegin ++;
 
        }
        
        return ans;
    }
};