// Runtime: 4 ms, faster than 99.78% of C++ online submissions for Sort the Matrix Diagonally.
// Memory Usage: 9.3 MB, less than 68.24% of C++ online submissions for Sort the Matrix Diagonally.

class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int rows=mat.size();
        int col=mat[0].size();
        for(int i=0;i<col;i++)
        {
            vector<int>temp;
            int r=0;
            int c=i;
            while(r<rows && c<col)
            {
                temp.push_back(mat[r][c]);
                r++;
                c++;
            }
            sort(temp.begin(),temp.end());
            r=0;
            c=i;
            int counter=0;
            while(r<rows && c<col)
            {
                mat[r][c]=temp[counter++];
                r++;
                c++;
            }
        }
         for(int i=1;i<rows;i++)
        {
            vector<int>temp;
            int r=i;
            int c=0;
            while(r<rows && c<col)
            {
                temp.push_back(mat[r][c]);
                r++;
                c++;
            }
            sort(temp.begin(),temp.end());
            r=i;
            c=0;
            int counter=0;
            while(r<rows && c<col)
            {
                mat[r][c]=temp[counter++];
                r++;
                c++;
            }
        }
        return mat;
        
    }
};
