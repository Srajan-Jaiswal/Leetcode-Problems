// Runtime: 20 ms, faster than 44.81% of C++ online submissions for Find the Duplicate Number.
// Memory Usage: 11.3 MB, less than 52.80% of C++ online submissions for Find the Duplicate Number.

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        int ans;
        while(1)
            {
            if(nums[i]==0){
                return i;
            }
                ans = i;
                i = nums[i];
                nums[ans] = 0;
            }
    }
};
