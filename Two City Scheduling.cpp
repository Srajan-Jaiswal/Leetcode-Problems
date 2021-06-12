class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<costs.size();i++){
            pq.push({costs[i][1]-costs[i][0],i});
        }
        int ans=0,itr=0;
        while(!pq.empty()){
          pair<int,int> t = pq.top();
          pq.pop();
          if(itr<costs.size()/2){
             ans += costs[t.second][0];
          }
          else{
             ans +=  costs[t.second][1];
          }
          itr++;  
        }
        return ans;
    }
};
