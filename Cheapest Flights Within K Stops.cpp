class Solution {
public:
    vector<pair<int,int>> arr[101];
    unordered_map<int,pair<int,int>> dis;
    void dijkstras(int src,int k){
        set<pair<int,int>> mst;
        for(int i=0;i<101;i++){
            dis[i] = {0,INT_MAX};
        }
        mst.insert({0,src});
        dis[src] = {0,0};
        while(!mst.empty()){
            auto p = *mst.begin();
            int node = p.second;
            int nodedis= p.first;
            mst.erase(mst.begin());
            for(auto c : arr[node]){
                if(nodedis + c.second < dis[c.first].second && dis[c.first].first <= k){
                    int dest = c.first;
                    auto f = mst.find({dis[dest].second,dest});
                    if(f != mst.end()){
                        mst.erase(f);
                    }
                    dis[dest].first=dis[node].first+1;
                    dis[dest].second = nodedis + c.second;
                    mst.insert({dis[dest].second,dest});
                }
            }
        }
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        for(int i=0;i<flights.size();i++){
            vector<int> temp = flights[i];
            arr[temp[0]].push_back({temp[1],temp[2]});
        }
        dijkstras(src,K);
        
       for(auto it : dis){
            cout<<it.first<<"-->"<<it.second.first<<"->"<<it.second.second<<endl;
        }
   
        if(dis[dst].second == INT_MAX) return -1;
        
        return dis[dst].second;
    }
};
