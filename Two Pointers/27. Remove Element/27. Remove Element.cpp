// vetctor interator 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(vector<int>::iterator iter=nums.begin(); iter!=nums.end(); )
        {     
            if( *iter == val)          
                iter = nums.erase(iter);      
            else            
                iter ++ ;
        }
      return nums.size();   
    }    
};

// two pointers
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(nums[i] != val)
                nums[count ++] = nums[i];
        }
      return count;   
    }    
};