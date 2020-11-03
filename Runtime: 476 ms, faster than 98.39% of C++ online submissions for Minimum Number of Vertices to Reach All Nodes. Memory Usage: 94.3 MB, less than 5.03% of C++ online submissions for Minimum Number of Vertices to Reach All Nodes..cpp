// Runtime: 476 ms, faster than 98.39% of C++ online submissions for Minimum Number of Vertices to Reach All Nodes.
// Memory Usage: 94.3 MB, less than 5.03% of C++ online submissions for Minimum Number of Vertices to Reach All Nodes.

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        int indeg[100001];
        vector<int> ans;
        for(int i = 0; i<edges.size();i++)
        {
            indeg[i]=0;
        }
        for(int i = 0; i<edges.size();i++)
        {
            indeg[edges[i][1]]++;
        }
        for(int i = 0; i<n;i++)
        {
            if(indeg[i]==0)
            {
                ans.push_back(i);
            }
            }
        return ans;
    }
};































