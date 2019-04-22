class Solution {
public:
    int hammingWeight(uint32_t n) {
        int num = 0 ;
        int i = 0;
        for(i = 0 ; i <=32; i++)
        {
            num += n & 1;
             n >>= 1;
        }
        
        return num;
    }
};