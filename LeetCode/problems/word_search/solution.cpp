class Solution {
public: 
    bool find(vector<vector<char>>& board, string word,bool flg[200][200],int i,int j,int l)
    {
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || flg[i][j] || board[i][j]!=word[l])
            return 0;
        if(l==word.size()-1)
            return 1;
        flg[i][j]=1;
        //cout<<"in ";
        if(find(board , word ,flg, i-1 , j , l+1)||find(board , word ,flg, i , j-1 , l+1)||
           find(board , word ,flg, i+1 , j , l+1)||find(board , word ,flg, i , j+1 , l+1))
            return 1;
        flg[i][j]=0;
        return 0;
        
        
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),f=0,m=board[0].size();
        bool flg[200][200]; 
          memset(flg,0,sizeof(flg));
        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                
                if(word[0]==board[i][j])
                {
                  
                    f=find(board,word,flg,i,j,0); 
                }
                if(f)
                    return 1;
            }
        }
        return 0;
    }
};