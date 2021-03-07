// Runtime: 8 ms, faster than 90.20% of C++ online submissions for Minimum Time Visiting All Points.
// Memory Usage: 10.1 MB, less than 77.07% of C++ online submissions for Minimum Time Visiting All Points.

class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sum = 0;
        for(int i=0;i<points.size()-1;i++){
          pair<int,int> p1 = make_pair(points[i][0],points[i][1]);
          pair<int,int> p2 = make_pair(points[i+1][0],points[i+1][1]);
           sum += max(abs(p1.first-p2.first),abs(p1.second-p2.second)); 
       }
        return sum;
    }
};
