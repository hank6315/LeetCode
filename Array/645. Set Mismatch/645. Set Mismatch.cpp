class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int dumplicate = 0 , dismatch = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[abs(nums[i]) - 1] < 0)
              dumplicate = abs(nums[i]);
            else
              nums[abs(nums[i]) - 1]*= -1;
                
        }
        
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] > 0)
                dismatch = i+1;
        
        return {dumplicate , dismatch};
    }
};