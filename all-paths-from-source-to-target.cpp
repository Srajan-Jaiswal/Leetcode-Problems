//Runtime: 16 ms, faster than 91.84% of C++ online submissions for All Paths From Source to Target.
//Memory Usage: 12.4 MB, less than 5.24% of C++ online submissions for All Paths From Source to Target.

class Solution {
public:
    vector<int> path;
    vector<vector<int>> ans;
    
    void dfs(vector<vector<int>>& graph, int u) {
        
        path.push_back(u);
        
        if(u == graph.size()-1){
            ans.push_back(path);
        }else{
            for(int v:graph[u]){
                dfs(graph, v);
            }
        }
        path.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

        dfs(graph, 0);
        return ans;
    }
};
