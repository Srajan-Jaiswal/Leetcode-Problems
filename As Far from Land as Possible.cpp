class Solution {
public:
    vector<int> dx = {-1,0,1,0};
    vector<int> dy = {0,1,0,-1};   
    bool is_valid(int rows , int cols ,int x, int y){ 
        if(x<0 || y<0 || x>rows || y>rows){
           return false;
        }
        return true;
    } 
    int mini = INT_MAX;
    int BFS(vector<vector<int>>& grid,int sx,int sy){ 
        int cols = grid[0].size();
        int rows = grid.size();
        vector<vector<bool>> vis(rows,vector<bool>(cols,false));
        vector<vector<int>> dis(rows,vector<int>(cols,INT_MAX));
        queue<pair<int,int>> q;
        q.push({sx,sy});
        vis[sx][sy] = 1;
        dis[sx][sy] = 0;
        while(!q.empty()){
            pair<int,int> p = q.front();
            int old_x = p.first;
            int old_y = p.second;
            for(int i=0;i<4;i++){
                int curr_x = old_x + dx[i];
                int curr_y = old_x + dy[i];
                if(is_valid(rows,cols,curr_x,curr_y) && !vis[curr_x][curr_y]){
                    vis[curr_x][curr_y] = 1;
                    dis[curr_x][curr_y] = dis[old_x][old_y] + 1;
                    q.push({curr_x,curr_y});
                    if(grid[curr_x][curr_y]==1){
                        mini = min(mini,dis[curr_x][curr_y]);
                    }
                }
            }
        }
        return mini;
    } 
    int maxDistance(vector<vector<int>>& grid) {
        int cols = grid[0].size();
        int rows = grid.size();
        int maxi = INT_MIN;
        /*for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==0){
                    maxi = max(maxi,BFS(grid,i,j));
                }
            }
        }*/
        return BFS(grid,0,0);
        //return  maxi;
    }
};
