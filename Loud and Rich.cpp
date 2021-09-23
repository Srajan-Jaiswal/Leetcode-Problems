class Solution {
public:
    vector<int> adj[501]; 
    void topo(int src,vector<bool> &vis,stack<int> &stk){
        vis[src] = true;
        for(auto it : adj[src]){
            if(!vis[it]){
               topo(it,vis,stk);
            }
        }
        stk.push(src); 
    } 
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
         for(auto it : richer){
                 adj[it[0]].push_back(it[1]);
         }
         stack<int> stk;
         vector<bool> vis(quiet.size(),false);
         for(int i=0;i<quiet.size();i++){ 
            if(!vis[i]) topo(i,vis,stk);
         }
         vector<int> ordering,ans(quiet.size(),-1);
         while(!stk.empty()){
             int tp = stk.top();
             stk.pop();
             ordering.push_back(tp);
         }
        /* for(auto it : ordering){ 
             cout<<it<<" ";
         } */
         int cnt =0 ;
        for (auto cur : ordering)
        {
            if (ans[cur] == -1) ans[cur] = cur;
            for (auto nx : adj[cur])
            {
                if (quiet[nx] >= quiet[cur])    
                {
                    quiet[nx] = quiet[cur];
                    ans[nx] = ans[cur];
                }
            }
        }
        return ans;
    }
};
