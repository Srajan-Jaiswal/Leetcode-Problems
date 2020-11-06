// Runtime: 416 ms, faster than 24.04% of C++ online submissions for Find Eventual Safe States.
// Memory Usage: 63.9 MB, less than 5.50% of C++ online submissions for Find Eventual Safe States.

class Solution {
public:
    int indeg[100001];
     vector<int>adj[10001];
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> ans;
        queue<int> pq;
         for(int j=0;j<graph.size();j++)
            {
                indeg[j]=0;
            }
        for(int i=0;i<graph.size();i++)
        {  
            vector<int> flag = graph[i];
             for(auto j:graph[i])
               {
                 adj[j].push_back(i); 
               }
               indeg[i]+=flag.size();
         }
         for(int i=0;i<graph.size();i++)
         {
             if(indeg[i]==0)
             {
                pq.push(i);
             }
         }
         while(!pq.empty())
         {
         int node = pq.front();
         ans.push_back(node);
         pq.pop(); 
             for(auto it :adj[node])
             {
                 indeg[it]--;
                 if(indeg[it]==0)
                 {
                    pq.push(it);
                 }
             }
         }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
