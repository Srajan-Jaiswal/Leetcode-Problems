// Runtime: 8 ms, faster than 74.50% of C++ online submissions for N-Queens.
// Memory Usage: 8.1 MB, less than 39.97% of C++ online submissions for N-Queens.

class Solution {
public:
    vector<vector<string> > res;
    bool valid(vector<vector<int> > &board, int row, int col, int n){
    for(int i=0; i<col; i++)
    {
        if(board[row][i] == 1)
            return false;
    }
        int i=row, j=col;
        while(i>=0 && j>=0){
            if(board[i][j] == 1)
            return false;
            i--;
            j--;
        }
       int x=row, y=col;
        while(x<n && y>=0){
            if(board[x][y] == 1)
            return false;
            x++;
            y--;
        } 
    return true;
}

void nQueen(vector<vector<int> > &board,int col, int n){
    if(col >= n)
    {
        vector<string> temp;
        for(int i=0; i<n; i++)
        {
            string row;
            for(int j=0; j<n; j++)
            {
                if(board[i][j] == 1){
                    row += 'Q';
                }
                else{
                    row += '.';
                }
            }
            temp.push_back(row);
        }
        res.push_back(temp);
    }
    
    for(int i=0; i<n; i++)
    {
        if(valid(board,i,col,n))
        {
            board[i][col] = 1;                 
            nQueen(board,col+1, n);   
            board[i][col] = 0;   // backtrack
        }
    }
}
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int> > board(n, vector<int> (n,0));
	    nQueen(board,0, n);
        return res;
    }
};
