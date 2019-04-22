class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> res;
        sort(candidates.begin() , candidates.end());
        combinationSumDFS(candidates , target , 0 , res , ans);    
         return ans;     
    }
    
    
    void combinationSumDFS(vector<int>& candidates , int target , int start , vector<int>& res, vector<vector<int>>& ans)
    {
        if(target < 0 ) return;
        else if(target == 0) ans.push_back(res);
        else
        {
            for (int i = start ; i < candidates.size(); i++)
            {
                res.push_back(candidates[i]);
                combinationSumDFS(candidates , target - candidates[i] , i , res , ans);
                res.pop_back();
            }
        }
    }
};