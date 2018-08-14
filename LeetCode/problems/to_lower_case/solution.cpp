class Solution {
public:
    string toLowerCase(string str) {
        string ans="";
        for(auto it:str)
            ans+=tolower(it);
        return ans;
    }
};