class Solution {
public:
    int longestValidParentheses(string s) {
     
        int len = s.length(),cnt=0;
        stack<char> stk;
        vector<int> v(len);
        for(int i=0;i<len;++i)
        {
            if(s[i]=='(')
                stk.push(s[i]);
            else if(s[i]==')' && !stk.empty() && stk.top()=='(')
            {
                stk.pop();
                v[stk.size()]+=v[stk.size()+1]+2;
                v[stk.size()+1]=0; 
            }
            else
                stk.push(s[i]);
        }
        
        
        int val=0;
        if(v.size()>0)  
            val=*max_element(v.begin(),v.end());
        return val;
    }
};