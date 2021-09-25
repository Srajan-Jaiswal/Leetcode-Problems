class Solution {
public:
    int dx[8] = {1,-1,0,0,-1,-1,1,1};
    int dy[8] = {0,0,1,-1,-1,1,-1,1};
    vector<vector<bool>> vis;
    vector<vector<int>> dis;
    bool check(vector<vector<int>> &grid, int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j] == 1) return false;
        if(vis[i][j]) return false;
        return true;
    }
    int bfs(vector<vector<int>> &grid,int sx,int sy){
        queue<pair<int,int>> q;
        q.push({sx,sy});
        vis[sx][sy] = 1;
        dis[sx][sy] = 1;
        while(!q.empty()){
            pair<int,int> p = q.front();
            q.pop();
if(p.first==grid.size()-1 && p.second==grid[0].size()-1) return dis[p.first][p.second];
            for(int i=0;i<8;i++){
                int n_x = p.first+dx[i];
                int n_y = p.second+dy[i];
                if(check(grid,n_x,n_y)){
                    vis[n_x][n_y] = true;
                    dis[n_x][n_y] = 1 +dis[p.first][p.second];
                    q.push({n_x,n_y});
                }
            }
        }
        return -1;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        vis.resize(grid.size(),vector<bool>(grid[0].size(),0));
        dis.resize(grid.size(),vector<int>(grid[0].size(),0));
        if(grid[0][0]==1) return -1;
        return bfs(grid,0,0);    
    }
};
