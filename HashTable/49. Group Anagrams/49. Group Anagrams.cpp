class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>mp;
        int i = 0;
        for(auto& s : strs)
        {
            string t = s;
            sort(t.begin() , t.end());
            mp[t].push_back(s);
        }
        
         vector<vector<string>> res;
        for (auto& n : mp){

            res.push_back(n.second);
        }
        
        return res;
            
    }
};