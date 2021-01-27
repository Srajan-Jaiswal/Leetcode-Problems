class Solution {
public:
    int mem[301][301] = {0};
    int dp(vector<vector<int>>matrix,int i,int j)
    {
        if(i<0 || i>=matrix.size() || j<0 || j>=matrix[0].size() || matrix[i][j]==0){
            return 0;
        } 
        if(mem[i][j]!=0)
        {
            return mem[i][j];
        } 
        int res = 1 + min(dp(matrix,i+1,j),min(dp(matrix,i,j+1),dp(matrix,i+1,j+1)));
        mem[i][j] = res;
        return  mem[i][j];
    }
    int cnt = 0;
    int countSquares(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                cnt += dp(matrix,i,j);
            }
        }
        return cnt;
    }
};
