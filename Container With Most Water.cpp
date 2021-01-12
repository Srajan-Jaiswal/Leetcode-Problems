// Runtime: 20 ms, faster than 100.00% of C++ online submissions for Container With Most Water.
// Memory Usage: 17.7 MB, less than 100.00% of C++ online submissions for Container With Most Water.

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int i=0,j=height.size()-1;
        int ans =0,area;
        while(i < j)
        {
            area = min(height[i],height[j])* (j-i);
            ans = max(ans , area);
            if(height[i] < height[j])
            {
                i++;
            }
            else if(height[i] > height[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return ans;
        
    }
};
