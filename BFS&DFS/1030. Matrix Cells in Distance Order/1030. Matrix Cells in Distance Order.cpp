class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        vector<vector<int>>res;
        vector<vector<bool>>visited(R,vector<bool>(C,false));
        vector<int>dirs{0,1,0,-1,0};
        
       queue<vector<int>> q;
        q.push({r0, c0});
        
        visited[r0][c0] = true;
        
        while(!q.empty())
        {
   
            vector<int> cur = q.front();
            q.pop();

            res.push_back(cur);

             for(int i = 0; i < 4; i++)
            {
                int tr = cur[0] + dirs[i];
                int tc = cur[1] + dirs[i+1];

               if (tr >= 0 && tc >= 0 && tr < R && tc < C && !visited[tr][tc]) {
                    q.push({tr, tc});
                    visited[tr][tc] = true;
                }
            }       
        }
        
        return res;
    }
};