Runtime: 20 ms, faster than 98.89% of C++ online submissions for Number of Islands.
Memory Usage: 9.6 MB, less than 6.19% of C++ online submissions for Number of Islands.

class Solution {
 
public:    
    void DFS_Helper(vector<vector<char>>& grid,int i,int j,int row,int col)
    {
       if(i>=row || j>=col || i<0 || j<0 || grid[i][j] == '0')
       {
            return;
       }
       grid[i][j] = '0';
       DFS_Helper(grid,i+1,j,row,col);
       DFS_Helper(grid,i-1,j,row,col);
       DFS_Helper(grid,i,j+1,row,col);
       DFS_Helper(grid,i,j-1,row,col); 
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int row = grid.size();
        int col = grid[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j] == '1')
                {
                  ans+=1;
                  DFS_Helper(grid,i,j,row,col);
                }
            }
        }
        return ans;
    }
};
