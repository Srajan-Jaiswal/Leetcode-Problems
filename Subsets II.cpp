// Runtime: 4 ms, faster than 73.75% of C++ online submissions for Subsets II.
// Memory Usage: 7.5 MB, less than 93.80% of C++ online submissions for Subsets II.
class Solution {
public:
    
    void backtrack(int p, vector<int>& nums, vector<int> &v, vector<vector<int>> &ans){
        for(int i=p;i<nums.size();i++){
            if((i>p) && nums[i]==nums[i-1]){
                continue;
            }
            v.push_back(nums[i]);
            ans.push_back(v);
            backtrack(i+1,nums,v,ans);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans{vector<int>{}};
        vector<int> curr;
        backtrack(0,nums,curr,ans);
        return ans;
    }
};
