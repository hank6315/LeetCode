class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int maxval = nums[0];
        int minval = nums[0];
        int res = nums[0];
        
        for(int i = 1; i < nums.size(); i++)
        {
            int a = maxval * nums[i];
            int b = minval * nums[i];
            
            maxval = max(max(a,b) , nums[i]);
            minval = min(min(a,b), nums[i]);
            
            res = max(res, maxval);
        }
        
        return res;
    }
};