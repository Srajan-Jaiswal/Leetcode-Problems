// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Subsets.
// Memory Usage: 7.1 MB, less than 80.37% of C++ online submissions for Subsets.

class Solution {
public:
    void DFS(vector<int> &nums,vector<int> &curr,vector<vector<int>> &sub, int idx)
    { 
        if(idx==nums.size()){
            sub.push_back(curr);
            return ;
        }
            curr.push_back(nums[idx]);
            DFS(nums,curr,sub,idx+1);
            curr.pop_back();
            DFS(nums,curr,sub,idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums){
        vector<vector<int>> sub;
        vector<int> curr;
       DFS(nums,curr,sub,0);
        return sub;
    }       
};
