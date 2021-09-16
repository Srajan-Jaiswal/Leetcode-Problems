class Solution {
public:
    bool isnotSafe(int i,int j,int m,int n){
        if(i < 0 || j < 0 || i>=m || j >= n) return true;
        else return false;
    }
    void mark(vector<vector<int>> &g, int i, int j, int &ans){
		if(isnotSafe(i,j,g.size(),g[0].size()) || g[i][j]==0 ) return;
		g[i][j] = 0;
	    ans++;
		mark(g,i+1,j,ans);
        mark(g,i-1,j,ans);
        mark(g,i,j+1,ans);
        mark(g,i,j-1,ans);
	}
	int maxAreaOfIsland(vector<vector<int>>& grid){
		int maxAns = 0;
		for(int i = 0; i < grid.size(); ++i)
			for(int j = 0; j<grid[i].size(); ++j) 
				if(grid[i][j] == 1){
                    int a=0;
                    mark(grid,i,j,a);
                    maxAns=max(maxAns,a);
                }        
		return maxAns;    
	}
};
