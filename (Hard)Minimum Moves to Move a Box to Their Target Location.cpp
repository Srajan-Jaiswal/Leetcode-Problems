class Solution {
    char g[52][52];
    int n,m;
    int steps = 0;
    pair<int,int> posB,posT,posS;
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    int vis[51][51][4];
    
    bool valid(int x, int y) {
        if(x<0 || y<0 || x>=n || y>=m) return false;
        return true;
    }
public:
    int minPushBox(vector<vector<char>>& grid) {
        if(grid.empty()) return -1;
        n = grid.size();
        m = grid[0].size();
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                g[i][j] = grid[i][j]; {
                    if(g[i][j]=='T') {
                        posT = {i,j};
                    }
                    if(g[i][j]=='B') {
                        posB = {i,j};
                    }
                    if(g[i][j]=='S') {
                        posS = {i,j};
                    }
                    
                    if(g[i][j]!='#') g[i][j]='.';
                }
            }
        }
        
        solve();
        return steps;
    }
    
    void solve() {
        queue<vector<pair<int,int> > > q;
        vector<pair<int,int> > v;
        v.push_back(posB);
        v.push_back(posS);
        
        q.push(v);
        
        while(!q.empty()) {
            int len = q.size();
            for(int itr = 0; itr < len; itr++) {
                v = q.front();
                pair<int,int> boxPos = v[0];
                pair<int,int> personPos = v[1];
                
                g[boxPos.first][boxPos.second] = '#';
                q.pop();
                
                if(boxPos.first == posT.first && boxPos.second == posT.second) {
                    return;
                }
                for(int dir = 0; dir < 4; dir++) {
                    int bx , by;
                    bx = dx[dir] + boxPos.first;
                    by = dy[dir] + boxPos.second;
                
                    if(valid(bx,by) && g[bx][by] != '#' && vis[bx][by][dir] == 0 && canPersonPushTheBox(personPos, boxPos.first-dx[dir],boxPos.second-dy[dir])) {
                        
                        vis[bx][by][dir] = 1;
                        vector<pair<int,int> > vt;
                        vt.push_back({bx,by});
                        vt.push_back(boxPos);
                        q.push(vt);
                    }
                    
                }
                
                g[boxPos.first][boxPos.second] = '.';

            }
            steps++;
        }
        
        steps = -1; 
        return;
    }
    
    
    bool canPersonPushTheBox(pair<int,int> personStartPos, int endPosX, int endPosY) {
        if(personStartPos.first == endPosX && personStartPos.second == endPosY) {
            return true;
        }
        
        int vis[51][51];
        for(int i=0;i<51;i++)
            for(int j=0;j<51;j++) vis[i][j]=0;
        
        queue<pair<int,int> > q;
        q.push(personStartPos);
        
        while(!q.empty()) {
            pair<int,int> p = q.front();
            q.pop();
            int px = p.first;
            int py = p.second;       
            if(px == endPosX && py == endPosY) return true;        
            if(vis[px][py]) continue;
            vis[px][py] = 1;
            for(int i=0;i<4;i++) {
                int x,y;
                x=dx[i]+px;
                y=dy[i]+py;
                if(valid(x,y) && vis[x][y] == 0 && g[x][y] != '#') {
                    q.push({x,y});
                }
            }
            
        }
        
        return false;
    }
};
