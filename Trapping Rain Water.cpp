// Runtime: 12 ms, faster than 44.06% of C++ online submissions for Trapping Rain Water.
// Memory Usage: 14.4 MB, less than 53.67% of C++ online submissions for Trapping Rain Water.

class Solution {
public:
    int trap(vector<int>& height) {
       int l = 0,r = height.size()-1;
        if(r==-1){
        return 0;
        }
        int ans = 0;
        int lmax = height[l],rmax = height[r];
        while(l<r){
            lmax = max(lmax,height[l]);
            rmax = max(rmax,height[r]);
            ans += lmax-height[l];
            ans += rmax-height[r];
            if(height[l] <height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return ans;
    }
};
