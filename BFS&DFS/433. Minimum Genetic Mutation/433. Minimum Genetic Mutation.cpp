class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        vector<char> gens{'A', 'C', 'G', 'T'};
        unordered_set<string> s(bank.begin() , bank.end());
        if(!s.count(end)) return -1;
        queue<pair<string,int>>q;
        q.push(make_pair(start,0));
        
        while(!q.empty())
        {
            auto val = q.front();
            q.pop();
            
            if(val.first == end) return val.second;
            
            for(int i = 0; i < val.first.size(); i++)
            {
                string str = val.first;
                
                for(auto c : gens)
                {
                    str[i] = c;
                    
                    if(s.count(str))
                    {
                        q.push(make_pair(str, val.second+1));
                        s.erase(str);
                    }
                }
            }
        }      
        return -1;
    }
};