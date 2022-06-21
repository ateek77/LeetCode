class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int ans=0;
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        stack<int> numbers;
        for(string& it:tokens){            
             int f,s;   
            if(it=="+"||it=="-"||it=="*"||it=="/"){
                            
                f= numbers.top(); numbers.pop();
                s= numbers.top(); numbers.pop();
            }    
            if(it=="+"){
                numbers.push(f+s);                
            }else if( it=="-"){
                numbers.push(s-f);
            }else if(it =="/"){
                numbers.push(s/f);
            }else if(it == "*"){
                numbers.push(s*f);
            }else{
                numbers.push(stoi(it));
            }                
        }
        return numbers.top();
    }
};