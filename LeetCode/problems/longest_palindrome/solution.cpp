class Solution {
public:
    int longestPalindrome(string s) {
        int n =s.length();
        int DP[257];
        memset(DP,0,sizeof(DP));
        for(int i=0;i<n;++i)
            ++DP[s[i]];
        int e_cnt,o_c;
        e_cnt=o_c=0;
        
        for(int i=0;i<257;++i)
        {
            if(DP[i]&1)
            {
                e_cnt+=DP[i]-1;
                o_c++;
            }
            else
                e_cnt+=DP[i];
        }
        if(o_c)
            e_cnt+=1;
        
        return e_cnt;
    }
};