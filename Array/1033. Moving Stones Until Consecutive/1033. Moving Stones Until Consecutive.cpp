class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> num = {a,b,c};
        sort(num.begin() , num.end());
        
        int max_move = num[2] - num[0] - 2;
        int min_move = 2;
        
        if(num[2] - num[1] < 3 || num[1] - num[0] < 3) min_move = 1;
        if(num[2] - num[1] == 1 && num[1] - num[0] == 1) min_move = 0;
        
        return {min_move , max_move};
    }
 };