class Solution {
public:
     vector<int> adj[100001];
     int vis[100001];
     int comp[100001];
     int con;
    vector<pair<int,int>> edg;
    void dfs(int src)
    {
       vis[src]=1;
       comp[src]=con;
       for(int nbr: adj[src])
       {
           if(vis[nbr]!=1)
           {
              dfs(nbr);
           }
       }
    }
    bool equationsPossible(vector<string>& equations) {
      for(int i=0; i<equations.size();i++)
      {
        string str = equations[i];
         if(str[1] == '=' && str[2] == '=')
         {
            adj[str[0]].push_back(str[3]);
            adj[str[3]].push_back(str[0]);
         }
          else{
              edg.push_back(make_pair(str[0],str[3]));
          }
      }
        con=0;
      for(int i=0;i<equations.size();i++)
      {
          //string str2 = equations[i];
          if(vis[i]!=1)
          {
              con++;    
              dfs(i);
          }
          
      }
        bool flag=true;
      for(int i=0;i<edg.size();i++)
      {
          int a = edg[i].first;
          int b = edg[i].second;
          if(comp[a] == comp[b] && a!=b)
          {
              flag=false;
              break;
          }
          else
          {
              flag=true;
              break;
          }
         
       }
        if(flag){
            return true;
        }
        else{
            return false;
        }
         
    }
};
