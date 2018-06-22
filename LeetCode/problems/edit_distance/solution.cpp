class Solution {
public:
    int minDistance(string w1, string w2) {
        int len1 =w1.length(),len2 = w2.length();
        if(!len1 || !len2)
        {
            return len1^len2;
        }
        int DP[len1+2][len2+2];
        memset(DP,0,sizeof(DP)); 
        
        for(int i=1;i<=len1;++i)
            DP[i][0]=i;
        
        for(int i=1;i<=len2;++i)
            DP[0][i]=i; 
        
        for(int i=1;i<=len1;++i)
        {
            for(int j=1;j<=len2;++j)
            {
                if(w1[i-1]==w2[j-1])
                    DP[i][j] = DP[i-1][j-1];
                else
                    DP[i][j] = 1+min(DP[i-1][j-1],min(DP[i-1][j],DP[i][j-1]));
            }
        } 
        // for(int i=0;i<=len1;++i)
        // {
        //     for(int j=0;j<=len2;++j)
        //             cout<<DP[i][j]<<" ";
        //         cout<<"\n";
        // }
        return DP[len1][len2];
    }
    /*
    "plasama"
    "altruism"
    */
    
};