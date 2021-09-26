class Solution {
public:
    vector<int>dx = {0,0,1,-1};
    vector<int>dy = {1,-1,0,0};
    int r,c;
    vector<vector<bool>> vis;
    queue<pair<int,int>> q;
    bool check(vector<vector<int>> &grid,int i,int j){
        if(i<0 || j<0 || i>=r || j>=c || grid[i][j] == 0) return false;
        if(vis[i][j]) return false;
        return  true;
    }
    void dfs(vector<vector<int>> &grid,int sx ,int sy){
        if(!check(grid,sx,sy)) return;
        vis[sx][sy] = 1;
        q.push({sx,sy});
        for(int i=0;i<4;i++){
            int newsx = sx + dx[i];
            int newsy = sy + dy[i];
            dfs(grid,newsx,newsy);
        }
    } 
    int shortestBridge(vector<vector<int>>& grid) {
         r = grid.size();
         c = grid[0].size();
        bool flag = false;
        vis.resize(r,vector<bool>(c,0));
        for(int i=0;i<r;i++){
           for(int j=0;j<c;j++){
               if(grid[i][j] == 1){
                   dfs(grid,i,j);
                   flag = true;
                   break;
               }
           }
            if(flag) break;
        }
        int ans = 0;
        while(!q.empty()){
            int size = q.size();
            ans++;
            for(int i=0;i<size;i++){
                pair<int,int> f = q.front();
                q.pop();
                for(int d=0;d<4;d++){
                    int cor_x = f.first + dx[d];
                    int cor_y =f.second + dy[d];
                    if(cor_x<0 || cor_y<0 || cor_x>=r || cor_y>=c || vis[cor_x][cor_y]){
                        continue;
                    }
                    if( grid[cor_x][cor_y]==1) return ans-1;
                    vis[cor_x][cor_y] = 1;
                    q.push({cor_x,cor_y});   
                }   
            }
        }
        return ans;
    }
};
