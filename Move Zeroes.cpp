// Runtime: 8 ms, faster than 63.36% of C++ online submissions for Move Zeroes.
// Memory Usage: 9.2 MB, less than 79.78% of C++ online submissions for Move Zeroes.
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int curr = 0, last = 0;
        while (curr < nums.size())
        {
            if (nums[curr] != 0)
            {
                swap(nums[last], nums[curr]);
                last++;
            }
            curr++;
        }
    }
};
