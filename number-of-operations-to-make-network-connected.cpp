// Runtime: 320 ms, faster than 21.74% of C++ online submissions for Number of Operations to Make Network Connected.
// Memory Usage: 51.8 MB, less than 5.17% of C++ online submissions for Number of Operations to Make Network Connected.

class Solution {
public:
    vector<int> adj[100001];
    int cnt=0;
    int conn=0;
    int vis[100001];
    void dfs(int src)
    {
       vis[src]=1;
      for(int nbr:adj[src])
      {
          if(vis[nbr]==0)
          {
              dfs(nbr);
              cnt+=1;
          }
      }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        //dfs(connections,0);
        for(int i=0;i<connections.size();i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        for(int it=0;it<n;it++)
        {
        if(vis[it]==0)
        {
            dfs(it);
                conn++;
        }
        }
       if(connections.size()>=n-1)
       {
           return conn-1;
       }
       else
       {
           return -1;
       }
    }
    
};
