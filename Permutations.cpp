Runtime: 888 ms, faster than 5.24% of C++ online submissions for Permutations.
Memory Usage: 145.8 MB, less than 5.17% of C++ online submissions for Permutations.

class Solution {
public:
        vector<vector<int>> ans;
        vector<vector<int>> backtrack(vector<int> &nums,int l,int r){
           if(l==r){
               ans.push_back(nums);
           }
           for(int i=l;i<=r;i++){
               swap(nums[l],nums[i]);
               backtrack(nums,l+1,r);
               swap(nums[l],nums[i]); 
           }
               return ans;
        }
        vector<vector<int>> permute(vector<int>& nums) {
        return backtrack(nums,0,nums.size()-1);
    }
};
