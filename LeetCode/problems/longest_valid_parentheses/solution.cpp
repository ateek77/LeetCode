class Solution {
public:
    int longestValidParentheses(string str) {
        if(str.size()<=1)
            return 0;
                
        stack<bool> stk;
        vector<int> vec(str.size(),0);
        
        for(int i=0;i<str.size();++i)
        {
            if(str[i]=='(')
                stk.push(1);
            else if(stk.empty() || !stk.top())
                stk.push(0);
            else if(str[i]==')' && !stk.empty())
            {
                stk.pop();
                vec[stk.size()]  +=vec[stk.size()+1]+2;
                vec[stk.size()+1] = 0;
            }
        }
        return *max_element(vec.begin(),vec.end());        
    }
};