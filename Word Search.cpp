Runtime: 320 ms, faster than 15.58% of C++ online submissions for Word Search.
Memory Usage: 180.2 MB, less than 20.88% of C++ online submissions for Word Search.

class Solution {
public:
    bool backtrack(vector<vector<char>> &board,vector<vector<bool>> &grid, string word,int i,int j,int curr){
        if(curr == word.size()){
            return true;
        }
        if(i<0 || i > board.size()-1 || j<0 || j > board[0].size()-1 || grid[i][j]==true || board[i][j] != word[curr]){
            return false;
        }
        grid[i][j] = true;
        if(backtrack(board,grid,word,i+1,j,curr+1)){
            return  true;
        }
        if(backtrack(board,grid,word,i,j+1,curr+1)){
            return  true;
        }
        if(backtrack(board,grid,word,i-1,j,curr+1)){
            return  true;
        }
        if(backtrack(board,grid,word,i,j-1,curr+1)){
            return  true;
        }
        grid[i][j]=false;
        return false;    
    }
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size();
        int col = board[0].size();
        if(board.empty() || word.length()==0){
            return false;
        }
        vector<vector<bool>> grid (row,vector<bool>(col,false));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
              if(board[i][j]==word[0] && backtrack(board,grid,word,i,j,0) ){
                  return true;
              }  
            }
        }
        return false;
    }
};
