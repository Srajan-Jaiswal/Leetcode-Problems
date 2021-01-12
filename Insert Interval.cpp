// Runtime: 20 ms, faster than 97.04% of C++ online submissions for Insert Interval.
// Memory Usage: 17 MB, less than 100.00% of C++ online submissions for Insert Interval.

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int i=0;
        while(i<intervals.size() &&  intervals[i][1] <newInterval[0])
        {
          ans.push_back(intervals[i]);
          i++;
        }
        if (i < intervals.size() && intervals[i][0] < newInterval[0]) {
          newInterval[0]=intervals[i][0] ;
        }
        while(i < intervals.size() && intervals[i][0] <= newInterval[1]) {
            if (i < intervals.size() && newInterval[1] < intervals[i][1]){
                newInterval[1] = intervals[i][1];
            }
            i++;
        }
        ans.push_back(newInterval);
        while(i < intervals.size()) {
            ans.push_back(intervals[i]);
                i++;
        }
        return ans;
    }
};


