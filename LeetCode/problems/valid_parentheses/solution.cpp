class Solution {
public:
    bool isValid(string s) {
        if(s.length()==1)
            return false;
        stack<char> char_stk;
        
        for(auto it:s){
            if(it == '(' || it == '[' || it == '{')
                char_stk.push(it);
            else if(it == ')'){
                if(char_stk.size() && char_stk.top() == '(')
                    char_stk.pop();
                else
                    return false;
            } else if(it == ']'){
                if(char_stk.size() &&char_stk.top() == '[')
                    char_stk.pop();
                else
                    return false;
            } else if(it == '}'){
                if(char_stk.size() &&char_stk.top() == '{')
                    char_stk.pop();
                else
                    return false;
            }else
                return false;
        }
        if(char_stk.size())
            return false;
        return true;
    }
};