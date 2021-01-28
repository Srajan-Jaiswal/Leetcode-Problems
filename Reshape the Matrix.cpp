class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int row = nums.size();
        int col = nums[0].size();
       vector<vector<int>> ab(r, vector<int>(c));
        if((row*col) < (r*c)){
            return nums;
        }
        else{
            stack<int> s;
            for(int i = row-1; i >= 0; i--){
                for(int k = col-1; k >= 0 ; k--){
                    s.push(nums[i][k]);
                }
            }
            for(int j = 0; j < r; j++){
                for(int l = 0; l < c; l++){
                    ab[j][l] = s.top();
                    s.pop();
                }
            }
        }
        return ab;
    }
};
