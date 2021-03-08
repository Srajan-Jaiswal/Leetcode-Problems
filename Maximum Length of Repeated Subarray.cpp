class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int findLength(vector<int>& A, vector<int>& B) {
        int size1=A.size();
        int size2=B.size();
        int lcs=0;
        vector<vector<int>>dp(size1+1,vector<int>(size2+1));
        for(int row=1;row<=size1;row++){
            for(int col=1;col<=size2;col++){
                if(A[row-1]==B[col-1]){
                    dp[row][col]=dp[row-1][col-1]+1;
                    lcs=max(lcs,dp[row][col]);
                }
            }
        }
        return lcs;
    }
};
