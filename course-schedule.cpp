Runtime: 32 ms, faster than 96.74% of C++ online submissions for Course Schedule.
Memory Usage: 13.4 MB, less than 5.48% of C++ online submissions for Course Schedule.

Question link: https://leetcode.com/problems/course-schedule/


class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
            vector<int> indeg(numCourses,0);
            vector<vector<int>> adj(numCourses);
            
            for(int i=0;i<prerequisites.size();i++){
                    indeg[prerequisites[i][1]]++;
                    adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
            }
            queue<int>q;
            
            for(int i=0;i<indeg.size();i++)
            {
                    if(indeg[i]==0)
                            q.push(i);
            }
             
            vector<int> vis(numCourses,0);
            while(!q.empty()){
                    int cur=q.front();
                    q.pop();
                   
                    vis[cur]=1;
                    for( int i=0;i<adj[cur].size();i++){
                            indeg[adj[cur][i]]--;
                            if(indeg[adj[cur][i]]==0)
                                    q.push(adj[cur][i]);
                    }
            }
            for(int i=0;i<vis.size();i++){
                    
                    if(vis[i]==0)
                            return false;
            }
            return true;
        
    }
};
