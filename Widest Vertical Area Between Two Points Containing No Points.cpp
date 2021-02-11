// Runtime: 208 ms, faster than 97.01% of C++ online submissions for Widest Vertical Area Between Two Points Containing No Points. 
// Memory Usage: 68.5 MB, less than 43.27% of C++ online submissions for Widest Vertical Area Between Two Points Containing No Points.

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
	vector<int> v;
	for(int i=0; i<points.size(); i++){
		v.push_back(points[i][0]);
	}
	sort(v.begin(), v.end()); 
	int maxi = 0;
	for(int i=1; i<v.size(); i++){
		int temp = v[i]-v[i-1];
		if(temp>maxi) {
            maxi=temp;
        }
	}
	return maxi;
}
};
