class Solution {
public:
    vector<int> twoSum(vector<int>& nm ,int target) {
      //  sort(nm.begin(),nm.end());
        vector<int> v;
        unordered_map<int,int> s;
     //   std::ios::sync_with_stdio(false);
    //    cin.tie(NULL);
        for(int i=0;i<nm.size();++i)
        {
            auto it =s.find(target-nm[i]);
            if(it!=s.end())
            {
                v.push_back(it->second);
                v.push_back(i);
                return v;
            }
            else
                s[nm[i]]=i;
                
        }         
        return v;
    }
};