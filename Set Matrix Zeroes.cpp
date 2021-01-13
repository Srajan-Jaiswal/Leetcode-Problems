// Runtime: 12 ms, faster than 99.93% of C++ online submissions for Set Matrix Zeroes.
// Memory Usage: 13.3 MB, less than 100.00% of C++ online submissions for Set Matrix Zeroes.

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
      int m=matrix.size();
      int n=matrix[0].size();
      vector<int>row(m,-1);
      vector<int>col(n,-1);
      for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                row[i]=0;
                col[j]=0;
            }
        }  
      }    

     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(row[i]==0 || col[j]==0){
                matrix[i][j]=0;
            }
        }  
      }    
    }
};
