int numJewelsInStones(char* J, char* S) {
    int lenj = strlen(J);
    int lens = strlen(S);
    
    int i , j;
    int ans = 0;
    
    for ( i = 0; i<lenj; i++)
    {
        for ( j=0; j<lens; j++)
            if(J[i]==S[j])
                ans++;
    }
    return ans;
}