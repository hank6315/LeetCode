class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> diec(wordList.begin() , wordList.end());
        if(!diec.count(endWord)) return 0;
        queue<pair<string,int>> q;
        q.push(make_pair(beginWord , 1));
        //diec.erase(diec.find(beginWord));
        
        while(!q.empty())
        {
            auto val = q.front();
            q.pop();
            
            if(val.first == endWord) return val.second;
            
            for(int i = 0; i < val.first.size(); i++)
            {
                string str = val.first;
                
                for(int j=0; j<26; j++)
                {
                    str[i] = 'a' + j;
                    
                    if(diec.count(str) == 1)
                    {
                        q.push(make_pair(str, val.second+1));
                        diec.erase(str);
                    }
                }
            }
        }
        
        return 0;
        
        
    }
};