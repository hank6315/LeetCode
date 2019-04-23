class Solution {
public:
    bool isValid(string s) {
        
        stack<char> res;
        
        for(char& c : s)
        {
            switch (c)
            {
                case '(':
                case '{':
                case '[': res.push(c); break;
                case ')': 
                    if(res.empty() || res.top() != '(') return false;
                    else
                    res.pop();
                    break;
                case '}': 
                    if(res.empty() || res.top() != '{') return false;
                    else
                    res.pop();
                    break;
                case ']': 
                    if(res.empty() || res.top() != '[') return false;
                    else
                    res.pop();
                    break;    
            }
                         
        }
        
        return res.empty();
    }
};