// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sort Colors.
// Memory Usage: 8.2 MB, less than 63.10% of C++ online submissions for Sort Colors.
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size(),l = 0, r = n - 1;
        for (int i = 0; i <= r; i ++) {
            while(i < r && nums[i] == 2) {
                swap(nums[i], nums[r --]);
            }
            if (nums[i] == 0) swap(nums[i], nums[l ++]);
        }
        return;
    }
};
