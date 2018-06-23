class Solution {
public:
    int min_ind(vector<int> v,int i,int j,int k)
    {
        if(v[i]<v[j])
            return v[i]<v[k]?i:k;
        else
            return v[j]<v[k] ? j: k;
    }
    int max_ind(vector<int> v,int i,int j,int k)
    {
        if(v[i]<v[j])
            return v[k]<v[j]?:k;
        else
            return v[j]<v[k] ? j: k;
    }
    
    int threeSumClosest(vector<int>& nm, int tar) {
        sort(nm.begin(),nm.end());
        int diff=INT_MAX , ans=0,i,j,k ,n=nm.size(),sum=0;
        
        for(i=0;i<n-2;++i)
        {
            j=i+1,k=n-1;
           // sum=tar-nm[i];
            
            while(j<k)
            {
              //  cout<<nm[i]<<" "<<nm[j]<<" "<<nm[k]<<"\n";
                if(diff > abs(tar - nm[i] - nm[j]-nm[k]))
                {
                    diff= abs(tar -nm[i] - nm[j]-nm[k]);
                    ans= nm[i]+nm[j]+nm[k];
                }
                if(tar  == nm[i] + nm[j]+nm[k]){
                    return tar;
                }
                else if(tar < nm[i]+nm[j]+nm[k])
                    --k;
                else
                    ++j;
                
            }
        }
        return ans;
    }
};