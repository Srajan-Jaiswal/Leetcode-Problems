 // Runtime: 80 ms, faster than 16.05% of C++ online submissions for Count Servers that Communicate.
// Memory Usage: 22.4 MB, less than 47.15% of C++ online submissions for Count Servers that Communicate.

class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i ,int j, int &count){
        if(grid[i][j]==1){
            count++;
            grid[i][j]=0;
            for(int col=0;col<grid[0].size();col++){
                if(grid[i][col]==1)dfs(grid,i,col,count);
            }
            for(int row=0;row<grid.size();row++){
                if(grid[row][j]==1)dfs(grid,row,j,count);
            }
        }
        
    }
    int countServers(vector<vector<int>>& grid){
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    int count=0;
                    dfs(grid,i,j,count);
                    if(count>1)ans+=count;
                }
            }
        }
        return ans;
    }
};
