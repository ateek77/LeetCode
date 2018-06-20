class Solution {
public:
 
    int findLongestChain(vector<vector<int>>& pr) {
        
        sort(pr.begin(),pr.end(),[](vector<int>a,vector<int> b){return a[1]<b[1];});
        
        int cnt=1,n = pr.size(),lst=0; 
        if(n==0)
                return 0;
        for(int i=1;i<n;++i)
        {
            if(pr[i][0] > pr[lst][1]){
                cnt++;
                lst=i;       
            }
        }
        return cnt; 
    }
};