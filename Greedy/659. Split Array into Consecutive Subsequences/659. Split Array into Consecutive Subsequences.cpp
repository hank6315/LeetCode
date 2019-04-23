class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int>cnt,tail;
        for(auto n : nums)
            ++cnt[n];
        
        for(auto&n : nums)
        {
            if(!cnt[n]) continue;
                cnt[n]--;
            
            if(tail[n-1] > 0)
            {
                tail[n-1]--;
                tail[n]++;
            }else if(cnt[n+1] && cnt[n+2])
            {
                cnt[n+1]--;
                cnt[n+2]--;
                tail[n+2]++;
            }
            else
                return false;
        }
        
        return true;
    }
};