class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
          vector<vector<int>> ans;
        vector<int> res;
        sort(candidates.begin() , candidates.end());
        combinationSum2DFS(candidates , target , 0 , res , ans);    
         return ans;     
    }
    
    void combinationSum2DFS(vector<int>& candidates , int target , int start , vector<int>& res, vector<vector<int>>& ans)
    {
        if(target < 0 ) return;
        else if(target == 0) ans.push_back(res);
        else
        {
            for (int i = start ; i < candidates.size(); i++)
            {
                if(i > start && candidates[i] == candidates[i-1]) continue;
                res.push_back(candidates[i]);
                combinationSum2DFS(candidates , target - candidates[i] , i + 1 , res , ans);
                res.pop_back();
            }
        }
    }
};