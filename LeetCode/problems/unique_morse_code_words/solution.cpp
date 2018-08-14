class Solution {
public:
    string gen(string str)
    {
        string arr[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string ans="";
        
        for(auto it:str)
        {
            ans+=arr[it-'a'];
        }
        return ans;
        
    }
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> st;
        for(auto it:words)
        {
            st.insert(gen(it));
        }
        return st.size();
    }
};