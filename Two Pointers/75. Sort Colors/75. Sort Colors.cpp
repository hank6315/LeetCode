class Solution {
public:
    void sortColors(vector<int>& nums) {
        int bound0 = 0, bound2 = nums.size() - 1;
        for(int i = 0 ; i< nums.size(); i++)
        {
            while(nums[i] == 2 && i < bound2)
            {
                swap(nums[i] , nums[bound2]);
                bound2 --;
            }
            
            while(nums[i] == 0 && i > bound0)
            {
                swap(nums[i], nums[bound0]);
                bound0 ++;
            }
        }
        
    }
};