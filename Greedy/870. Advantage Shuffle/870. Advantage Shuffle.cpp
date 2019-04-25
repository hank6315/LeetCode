class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        multiset<int>s(A.begin(), A.end());
        vector<int>res;
        for(auto& b : B)
        {
            auto it = s.upper_bound(b);
           if (it == s.end()) it = s.begin();  // if find the end no value , return the head.   
            res.push_back(*it);
            s.erase(it);
        }
        
        return res;
    }
};