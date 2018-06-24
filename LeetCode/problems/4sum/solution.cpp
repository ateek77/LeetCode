class Solution {
public:
    void insert(vector<vector<int>>  &v ,vector<int> vv)
    {
        auto it=v.begin();
        int flg=0;
        for(it;it!=v.end();++it)
        {
            flg=1;
            for(int i=0;i<4;++i)
            {
                if((*it)[i]!=vv[i])
                    flg=0;
                    
            }
            if(flg)
                    return ;
        }
        v.push_back(vv); 
    }
    vector<vector<int>> fourSum(vector<int>& arr, int tar) {
        sort(arr.begin(),arr.end());
        vector<vector<int> > v;
        int n=arr.size();
        for(int i=0;i<n-3;++i)
        {
            for(int j=i+1;j<n-2;++j)
            {
                int k=j+1,l=n-1;
                while(k<l)
                {
                    if(arr[i]+arr[j]+arr[k]+arr[l]==tar)
                    {
                        vector<int> vv={arr[i],arr[j],arr[k],arr[l]};
                        insert(v,vv);
                    }
                    if(arr[i]+arr[j]+arr[k]+arr[l]<tar)
                        ++k;
                    else
                        --l;
                }
            }
        } 
        return v;
    }
};