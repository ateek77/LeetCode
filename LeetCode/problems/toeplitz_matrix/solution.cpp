class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& M) {
        int x1,y1,x2,y2,n=M.size(),m=M[0].size();
        if(n==1)
            return 1;
        x1=x2=n-1;
        y1=y2=0;
        do{
            int t1=x1,t2=y1,p1=x2,p2=y2;
            while(t1<=p1)
            {            
                if(M[t1][t2]!=M[p1][p2])
                    return 0;
                ++t1,++t2;
            }
            if(x1>=0)
            {
                x1!=0?--x1:++y1; 
            }
            if(y2<m)
            {
                y2==m-1?--x2:++y2; 
            }
        }while(x1!=x2 || y1!=y2);
        return 1;
    }
};