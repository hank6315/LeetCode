//ref : https://leetcode.com/problems/length-of-last-word/discuss/21892/7-lines-4ms-C++-Solution

class Solution {
public:
    int lengthOfLastWord(string s) {
       int len = 0, tail = s.length() - 1;
        while (tail >= 0 && s[tail] == ' ') tail--;
        printf("first tail : %d \n", tail);
        while (tail >= 0 && s[tail] != ' ') {
            len++;
            tail--;
            
             printf("len : %d , tail : %d \n", len,tail);
        }
        return len;
    }
};