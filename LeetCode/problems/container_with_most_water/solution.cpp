class Solution {
public:
    int maxArea(vector<int>& h) {
        int mx=0,n=h.size()-1,s=0;
        while(s<n)
        {
            mx =max(mx,(n-s)*min(h[s],h[n]));
            if(h[s]<h[n])
                ++s;
            else
                --n;
        }
        
        return mx; 
    }
};