class Solution {
public:
    int trap(vector<int>& h) {
        // vector<int> lt,rt;
        
        int n=h.size();     
        int lt[n];
        int rt[n];
        
        // lt.push_back(h[0]);
        lt[0]=h[0];
        for(int i=1;i<n;++i){
            if(lt[i-1]>h[i]){
                lt[i]=(lt[i-1]);
            }else{
                lt[i]=(h[i]);
            }
        }
        
        rt[n-1]=h[n-1];
        for(int i=n-2;i>=0;--i){
            if(rt[i+1]>h[i]){
                rt[i]=rt[i+1];
            }else{
                rt[i]=h[i];
            }
        }
        int sum=0;
        for(int i=0;i<n;++i){
            sum+=max(0,min(lt[i],rt[i])-h[i]);
        }
        return sum;
    }
};