class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& ob) {
        int n=ob.size(),m=ob[0].size();
        int DP[n+1][m+1];
        memset(DP,0,sizeof(DP));
        if(ob[n-1][m-1])
            return 0;
        
        DP[n-1][m-1]=1;
        for(int j=m-2,i=n-1;i>=0;--i)
        {
            while(j>=0)
            {
                if(!ob[i][j])
                    DP[i][j] = DP[i][j+1] + DP[i+1][j];
                --j;
            }
            j=m-1;
        }        
      /*  for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
                    cout<<DP[i][j]<<" ";
            cout<<"\n";
        }*/
        return DP[0][0];
    }
};