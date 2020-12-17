// Runtime: 8 ms, faster than 52.95% of C++ online submissions for Search a 2D Matrix.
// Memory Usage: 10 MB, less than 12.17% of C++ online submissions for Search a 2D Matrix.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size() == 0 || matrix[0].size() == 0){
            return false;
        }
        int m = matrix.size(), n = matrix[0].size();
        if(target < matrix[0][0] || target > matrix[m - 1][n - 1])
        {
            return false;
        }
        int l = 0, r = m - 1;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(matrix[mid][0] > target){
                r = mid - 1;
            }
            else if(matrix[mid][0] < target){
                l = mid + 1;
            }
            else return true;
        }
        int row = r;
        l = 0;
        r = n - 1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(matrix[row][mid] > target){
                r = mid - 1;
            }
            else if(matrix[row][mid] < target){
                l = mid + 1;
            }
            else return true;
        }
        return false;
    }
};
