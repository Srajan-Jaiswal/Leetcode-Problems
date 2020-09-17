Runtime: 876 ms, faster than 14.25% of C++ online submissions for K Closest Points to Origin.
Memory Usage: 65.5 MB, less than 30.77% of C++ online submissions for K Closest Points to Origin.

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<vector<int>> ans;
        priority_queue<pair<double,pair<int,int>>> maxh;
        for(int i=0;i<points.size();i++)
        {
            vector<int> temp = points[i];
            double dis = sqrt((temp.front()*temp.front()) + (temp.back()*temp.back()));
            maxh.push(make_pair(dis,make_pair(temp.front(),temp.back())));
            if(maxh.size()>K)
            {
             maxh.pop();
            }
        }
        while(!maxh.empty() && K>0){
            pair<double,pair<int,int>> p = maxh.top();
            vector<int> v;
            v.push_back(p.second.first);
            v.push_back(p.second.second);
            maxh.pop();
            ans.push_back(v);
            v.clear();
            K--;
            }
        return ans;
    }
};
