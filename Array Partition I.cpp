// Runtime: 128 ms, faster than 77.52% of C++ online submissions for Array Partition I.
// Memory Usage: 28.6 MB, less than 61.83% of C++ online submissions for Array Partition I.

class Solution {
public:
 int arrayPairSum(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(), nums.end());
        int i=0;
        while(i<nums.size())
        {
            ans+=nums[i];
            i+=2;   
        }
        return ans;
    }
};
