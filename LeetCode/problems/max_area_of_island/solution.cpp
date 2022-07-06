class Solution {
public:
    int find_max_island(vector<vector<int>>& grid,vector<vector<int>>& visited,int row,int coloum,int &rows,int &coloums){
        if(row<0 || row>=rows || coloum<0 ||coloum>=coloums || visited[row][coloum] || !grid[row][coloum])
            return 0;
        visited[row][coloum]=1;
        
        int sumof_island =1;
        sumof_island += find_max_island(grid,visited,row,coloum-1,rows,coloums);
        sumof_island += find_max_island(grid,visited,row,coloum+1,rows,coloums);
        sumof_island += find_max_island(grid,visited,row+1,coloum,rows,coloums);
        sumof_island += find_max_island(grid,visited,row-1,coloum,rows,coloums);
        
        return sumof_island;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int rows,coloums,max_island;
        rows = grid.size();
        coloums = grid[0].size();
        
        vector<vector<int>> visited(rows,vector(coloums,0));
        
        for(int row =0;row<rows;++row){
            
            for(int coloum = 0; coloum <coloums;++coloum){
                max_island = max(max_island , find_max_island(grid,visited,row,coloum,rows,coloums));
            }
        }
        return max_island;
    }
};