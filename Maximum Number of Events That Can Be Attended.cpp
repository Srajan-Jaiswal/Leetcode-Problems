class Solution {
public:
    int maxEvents(vector<vector<int>>& events){
    int low = 0,high = 0;
    unordered_map<int,vector<int>> um;
    for(auto &it: events) {
        um[it[0]].push_back(it[1]);
        low= min (low, it[0]);
        high=max (high,it[1]);
    }        
    priority_queue<int,vector<int>,greater<int>> pq;
    int res = 0;
    for(int i=low; i<=high; i++){
        if(um.count(i)) {
            for (auto it : um[i]) pq.push(it);
        }
        if(pq.size()){   
            res++;
            pq.pop();
            while(pq.size() && i==pq.top()) pq.pop();
        }
        if(events.size()==res) break;
    }
    return res;
}
};
