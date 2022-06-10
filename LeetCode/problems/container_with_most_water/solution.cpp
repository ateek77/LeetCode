class Solution {
public:
    int maxArea(vector<int>& h) {
        int mx_h,i,n=h.size()-1;
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        mx_h=0;i=0;
        while(i<n){
            int area = (n-i) * min(h[i],h[n]);
            if(area>mx_h) mx_h= area;
            if(h[i]<=h[n]) i++;
            else --n;
        }
        return mx_h;
    }
};