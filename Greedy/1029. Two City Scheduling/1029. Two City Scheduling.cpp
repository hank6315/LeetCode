class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int res = 0;
        
        sort(costs.begin() , costs.end() , [](vector<int> v1 , vector<int>v2){
           return (v1[0] - v1[1] < v2[0] - v2[1]); 
        });
        
        for(int i = 0; i < costs.size(); i++)
        {
            res += i < (costs.size() / 2) ? costs[i][0] : costs[i][1];
        }
        
        return res;
    }
};