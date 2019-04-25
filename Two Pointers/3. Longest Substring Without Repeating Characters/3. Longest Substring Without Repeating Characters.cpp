class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> res(255, -1);
        int  len = 0, pos = -1;
        
        for(int i = 0; i < s.length(); i++)
        {
            pos = max(pos, res[s[i]]);
            
            len = max(len , i - pos);
            
            res[s[i]] = i;

        }
        
        return len;
    }
};