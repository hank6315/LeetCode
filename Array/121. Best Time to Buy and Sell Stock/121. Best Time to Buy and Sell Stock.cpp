class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int res = 0;
        for(auto& price : prices)
        {
            buy = min(buy , price);
            res = max(res , price - buy);
        }
        return res;
    }
};