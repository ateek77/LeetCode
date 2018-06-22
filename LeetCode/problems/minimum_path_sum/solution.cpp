class Solution {
public:
    int minPathSum(vector<vector<int>>& ob) {
        int n=ob.size(),m=ob[0].size();
        int mx,mn,DP[n+1][m+1];
        memset(DP,125,sizeof(DP));  
        mx=DP[0][0];
        for(int j=1,i=1;i<=n;++i)
        {
            j=1;
            while(j<=m)
            {
                DP[i][j] =((mn = min(DP[i][j-1],DP[i-1][j]))==mx? 0:mn) +ob[i-1][j-1];
                ++j;
            }
        }     
        return DP[n][m]==mx?0:DP[n][m];
    }
};