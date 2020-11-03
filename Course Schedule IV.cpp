class Solution {
public:
    vector<int> adj[100001];
    vector<bool> tf;
    int indeg[10001];
    vector<int> ans;
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        for(int i=0;i<prerequisites.size();i++)
          {
              indeg[i]=0;
          }  
        for(int i=0;i<prerequisites.size();i++)
          {
              vector<int> v = prerequisites[i];
              adj[v.front()].push_back(v.back());
              indeg[v.back()]++;
          }
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<prerequisites.size();i++)
         {
          if(indeg[i]==0)
          {
              pq.push(i);
          }
         }
        while(!pq.empty())
        {
        int t = pq.top();
        ans.push_back(t);
        pq.pop();
        for(int nbr: adj[t])
        {
            indeg[nbr]--;
            if(indeg[nbr]==0)
            {
                pq.push(nbr);
            }
        }
        }
        for(int i=0;i<queries.size();i++){
            vector<int> q = queries[i];
            int a = q.front();
            int b = q.back();
            auto it1 = find(ans.begin(),ans.end(),a);
            auto it2 = find(ans.begin(),ans.end(),b);
            if(it1<it2)
            {
                tf.push_back(true);
            }
            else
            {
                tf.push_back(false);
            }
        }
        return tf;
        
    }
}; 
