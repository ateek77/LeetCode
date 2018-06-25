class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int n=mat.size(),m,i,j,k;   
        if(n<1)
            return 0;
        m=mat[0].size();
        if(m<1)
            return 0;
        for(i=0;i<m;++i)
            if(mat[0][i]==tar)
                return 1;
            else if(mat[0][i]>tar)
                break;
        if(i==m)
            --i;
        for(j=0;j<n;++j)
            if(mat[j][i]==tar)
                return 1;
            else if(mat[j][i]>tar)
                break;
        if(j==n)
            --j;
        while(i>=0)
            if(mat[j][i--]==tar)
                return 1;
        return 0;                
    }
};