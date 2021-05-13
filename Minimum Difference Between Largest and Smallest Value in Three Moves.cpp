// Runtime: 76 ms, faster than 90.96% of C++ online submissions for Minimum Difference Between Largest and Smallest Value in Three Moves.
// Memory Usage: 35.3 MB, less than 43.54% of C++ online submissions for Minimum Difference Between Largest and Smallest Value in Three Moves.
class Solution {
public:
   int minDifference(vector<int>& nums) {
        int n = nums.size();
        if(n < 5)  return 0;
        sort(nums.begin(), nums.end());
        int  res = min({nums[n-4]-nums[0], nums[n-1]-nums[3], nums[n-3]-nums[1], nums[n-2]-nums[2]});
        return res;
    }
};
