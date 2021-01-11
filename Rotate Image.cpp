// Runtime: 4 ms, faster than 55.68% of C++ online submissions for Rotate Image.
// Memory Usage: 7.4 MB, less than 90.09% of C++ online submissions for Rotate Image.

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        if(matrix.size()<=1){
            return ;
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j = i; j <matrix.size();j++)
            swap(matrix[i][j], matrix[j][i]);
        }
            
        for(int i = 0; i < matrix.size();i++)
        {
            int j = 0;
            int k = matrix.size()-1;
            while(j<=k){
                swap(matrix[i][j] , matrix[i][k]), j++ , k--;
            
            }
        }
        return;
    }
};
