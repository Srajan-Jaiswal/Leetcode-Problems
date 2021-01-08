Runtime: 1584 ms, faster than 5.00% of C++ online submissions for Permutations II.
Memory Usage: 323.5 MB, less than 5.01% of C++ online submissions for Permutations II.

class Solution {
public:
     vector<vector<int>> ans;
        vector<vector<int>> backtrack(vector<int> &nums,int l,int r){
           if(l==r){
               ans.push_back(nums);
           }
            set<int> s;
           for(int i=l;i<=r;i++){
              if(s.find(nums[i])!=s.end()){
                      continue;
              }
               s.insert(nums[i]);  
               swap(nums[l],nums[i]);
               backtrack(nums,l+1,r);
               swap(nums[l],nums[i]);
           }
               return ans;
        }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         return backtrack(nums,0,nums.size()-1);
    }
};
