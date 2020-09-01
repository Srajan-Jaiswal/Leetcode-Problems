//Runtime: 8 ms, faster than 89.43% of C++ online submissions for Combination Sum.
//Memory Usage: 10.9 MB, less than 74.74% of C++ online submissions for Combination Sum.

class Solution {
public:
    void DFS(vector<vector<int>> &ans, vector<int> &comb ,vector<int> &candidates, int target,int idx)
    {
        if(target<0)
        {
            return;
        }
        else if(target == 0){
            ans.push_back(comb); 
            return;
        }
        for(int i=idx;i<candidates.size();i++)
        {
            comb.push_back(candidates[i]);
            DFS(ans,comb,candidates,target-candidates[i],i);
            comb.pop_back();    
        }
    }        

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> comb;
        DFS(ans,comb,candidates,target,0);
        return ans;
    }
};
