char gr[100001][100001];
 bool vis[100001][100001];
 int dis[100001][100001];
 int n;
 bool valid(int x,int y)
 {
     if(x<1 || x>n || y<1 || y>n || gr[x][y]== '#')
     {
         return false;
     }
     else if(vis[x][y]==1)
     {
         return false;
     }
     else{
         return true;
     }
 }
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};
string reachTheEnd(vector<string> grid, int maxTime) {
    n = grid.size();
    for(int i=1;i<=grid.size();i++)
    {
        string s = grid[i];
        for(int j=1;j<=s.length();j++)
        {
            gr[i][j] = s[i];
        }
    }
    queue<pair<int,int>>  q;
    q.push(make_pair(1,1));
    vis[1][1] = 1;
    dis[1][1] = 0;
    while(!q.empty())
    {
       int p_currx = q.front().first;
       int p_curry = q.front().second;
       q.pop();
       for(int i=1;i<=4;i++)
       {
           if(valid(p_currx+dx[i],p_curry+dy[i])){
               
               int p_currxnew = p_currx;
               int p_currynew = p_curry;
               vis[p_currxnew][p_currynew]= 1;
               dis[p_currxnew][p_currynew] = dis[p_currx][p_curry] + 1;
               q.push(make_pair(p_currxnew,p_currynew));
           }
       }
    }
    string str = "Yes";
    string str1="No";
    if(dis[n][n] == maxTime)
    {
        return str ;
    }
    else{
        return str1 ;
    }
     

}
