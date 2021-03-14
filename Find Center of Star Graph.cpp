class Solution {
public:
    vector<int> adjlist[100002];
    int findCenter(vector<vector<int>>& edges) {
        int ans;
        for(int i=0;i<edges.size();i++){
           vector<int> p = edges[i];
           adjlist[p[0]].push_back(p[1]);
           adjlist[p[1]].push_back(p[0]);
        }
    for(int i=1;i<100002;i++){
        int n = adjlist[i].size();
        if(n>=edges.size()) ans = i;
    }
        return ans;
    }
};
