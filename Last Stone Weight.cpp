class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for(auto i: stones)pq.push(i);
        while(pq.size()>1){
            int p1 = pq.top();
            pq.pop();
            int p2 = pq.top();
            pq.pop();
            int ans = abs(p1-p2);
            if(ans>0)pq.push(ans);
        }
        return pq.size()?pq.top():0;
    }
};
