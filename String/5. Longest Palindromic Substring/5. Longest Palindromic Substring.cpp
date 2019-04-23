class Solution {
public:
    string longestPalindrome(string s) {
        
        if(s.size() < 2) return s;
        int n = s.size(), maxLen = 0, start = 0;
        
        for(int i = 0; i < n - 1; i++)
        {
            helper(s,i,i,start,maxLen); //奇數
            helper(s,i,i + 1,start,maxLen);//偶數
        }
        
        return s.substr(start , maxLen);
    }
    
    void helper(string s , int left , int right, int& start, int& maxLen)
    {
        while(left >= 0 && right < s.size() && s[left] == s[right])
        {
            left--;
            right++;
        }
        
        if(maxLen < right - left - 1)
        {
            start = left + 1;
            maxLen = right - left -1;
        }
    }
};