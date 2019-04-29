
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(i + 1 < nums.size() && nums[i] == nums[i + 1]) continue;
            else
                nums[cnt++] = nums[i];
        }
        
        return cnt;
    }
};


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =  0;
        
        if(nums.size() == 0) return 0;
        
        for(int j = 1 ; j <= nums.size() - 1; j++ )
        {
            if(nums[j] != nums[i])
            {  
                i++;
                nums[i] = nums[j];
                
            }
        }
        
        return i + 1;
    }    
};
