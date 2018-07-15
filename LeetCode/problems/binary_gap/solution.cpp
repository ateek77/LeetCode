class Solution {
public:
    int binaryGap(int N) {
        int dis=0,mx=0;
        
        while(N)
        {
            if(N&1)
            {
                mx=max(mx,dis);
                dis=1;
            }
            else if(dis)
                ++dis;    
            N>>=1;
        }
        return mx;        
    }
};