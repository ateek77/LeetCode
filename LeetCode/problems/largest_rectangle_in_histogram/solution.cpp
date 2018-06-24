class Solution {
public:
    int largestRectangleArea(vector<int>& hg) {
        stack<int> st ;
        int i=0,n=hg.size(),mx=0;
        
        while(i<n)
        {
            if(st.empty() || hg[st.top()] < hg[i])
            {    st.push(i);
                ++i;}
            else
            {
                int area =0, tp =  st.top();
                st.pop();
                
                if(!st.empty()){
                    area = (i-st.top()-1)*hg[tp];
                }
                else
                    area  = i*hg[tp];
                mx= max(mx,area);
            }
        }
        
        while(!st.empty())
        {
            int area =0, tp =  st.top();
            st.pop();

            if(!st.empty()){
                area = (n-st.top()-1)*hg[tp];
            }
            else
                area  = n*hg[tp];
            mx= max(mx,area);
        }
        
        return mx;
    }
    
};