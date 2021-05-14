// Runtime: 232 ms, faster than 32.72% of C++ online submissions for Minimum Time to Collect All Apples in a Tree.
// Memory Usage: 64.8 MB, less than 57.26% of C++ online submissions for Minimum Time to Collect All Apples in a Tree.

class Solution {
public:
    vector<int> arr[100001];
    int dfs(int s,vector<bool> &hA,vector<bool> &vis){
        vis[s] = true;
        int cnt=0;
        for(auto it:arr[s]){
            if(!vis[it]){ 
            cnt+=dfs(it,hA,vis);    
            }
        }
        if(cnt==0 && !hA[s]) cnt = 0;
        else cnt+=1;
        return cnt;
    } 
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        for(vector<int> v : edges){
            arr[v[0]].push_back(v[1]);
            arr[v[1]].push_back(v[0]);
        }
        vector<bool> vis(n,false);  
        int st = dfs(0,hasApple,vis);
        if(st) return (st-1)*2;
        else return 0;
    }
};
