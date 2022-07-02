class Solution {
public:
     int direction[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
    
    void findIsland(vector<vector<char>> &grid,vector<vector<int>> &isVisited,int rowPosition,int coloumPosition,int rows,int coloums){
        if(!insidePosition(rowPosition,coloumPosition,rows,coloums) || isVisited[rowPosition][coloumPosition] || grid[rowPosition][coloumPosition]=='0'){
            return ;
        }
        isVisited[rowPosition][coloumPosition]=1;
        for(int direct =0; direct<4;++direct){
            findIsland(grid,isVisited,rowPosition+direction[direct][0],coloumPosition+direction[direct][1],rows,coloums);
        }
        return;
    }
    int insidePosition(int row,int coloum,int rows,int coloums){
        if(row>=0 && row<rows && coloum>=0 && coloum<coloums)
            return true;
        return false;
    }
    int numIslands(vector<vector<char>>& grid) {
        int rows,coloums,isLandCount=0;
        
        rows=grid.size(); coloums =grid[0].size(); 
        
        vector<vector<int>> isVisited(rows,vector<int>(coloums,0));
        
        for(int rowPosition =0;rowPosition<rows;++rowPosition){
            for(int coloumPosition = 0;coloumPosition<coloums;++coloumPosition){
                if(!isVisited[rowPosition][coloumPosition] && grid[rowPosition][coloumPosition]=='1'){
                    isLandCount++;
                    findIsland(grid,isVisited,rowPosition,coloumPosition,rows,coloums);
                }
            }
        }
        return isLandCount;
    }
};