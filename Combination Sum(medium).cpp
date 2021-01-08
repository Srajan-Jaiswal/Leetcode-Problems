Runtime: 24 ms, faster than 37.54% of C++ online submissions for Combination Sum.
Memory Usage: 11.5 MB, less than 57.15% of C++ online submissions for Combination Sum.

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> curr;
    int sum=0;
    void backtrack(vector<int> &candidates,int target,int idx){
    if(sum==target)
    {
        ans.push_back(curr);
        return;
    }    
    if(sum > target){
        return;
    }
    for(int i=idx;i<=candidates.size()-1;i++)
    {
        if(candidates[i]<=target){
            sum+=candidates[i];
       curr.push_back(candidates[i]);
       backtrack(candidates,target,i);
       curr.pop_back(); 
            sum-=candidates[i];
        }
    }   
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        backtrack(candidates,target,0); 
        return ans;
    }
};
