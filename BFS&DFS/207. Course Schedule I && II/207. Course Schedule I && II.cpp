//207

class Solution {
public:
     
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
         
        vector<vector<int>>res(numCourses);
        
        for(auto& p : prerequisites)
            res[p.first].push_back(p.second);
        
        // 1 == visiting, 2 = visited
        vector<int>v (numCourses, 0);
        
        for(int i = 0; i < numCourses; i++)
            if(dfs(i, v, res)) return false;
        
        return true;
            
    }
    
    bool dfs(int cur, vector<int>& v, vector<vector<int>>& res) {
        if(v[cur] == 1) return true;
        if(v[cur] == 2) return false;
        
        v[cur] = 1;
        
        for(const int t : res[cur])
            if(dfs(t, v, res)) return true;
        
        v[cur] = 2;
        
        return false;
    }
};


//210
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
         vector<vector<int>>res(numCourses);
        
        for(auto& p : prerequisites)
            res[p.first].push_back(p.second);
        
        vector<int> ans;
        // 1 == visiting, 2 = visited
        vector<int>v (numCourses, 0);
        
        for(int i = 0; i < numCourses; i++)
            if(dfs(i, v, res , ans)) return {};
        
       
        return ans;      
    }
    
     bool dfs(int cur, vector<int>& v, vector<vector<int>>& res, vector<int>& ans) {
        if(v[cur] == 1) return true;
        if(v[cur] == 2) return false;
        
        v[cur] = 1;
        
        for(const int t : res[cur])
            if(dfs(t, v, res, ans)) return true;
        
         
        v[cur] = 2;
        ans.push_back(cur);
         
        return false;
     }
};