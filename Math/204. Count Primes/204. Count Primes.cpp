class Solution {
public:
 
    int countPrimes(int n) {
      vector<bool> dp(n, true);
        dp[0] = false;
        dp[1] = false;
        for(int i = 2; i < sqrt(n); i++) {
            if(dp[i]) {
                for(int j = i * i; j < n; j += i) {
                    dp[j] = false;
                }
                
            }
            
        }
        return count(dp.begin(), dp.end(), true);   
    } 
};