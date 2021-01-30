// Runtime: 4 ms, faster than 92.86% of C++ online submissions for Rotate Array.
// Memory Usage: 9.9 MB, less than 77.44% of C++ online submissions for Rotate Array.
class Solution {
public:
    void rotate(vector<int>& nums, int k) {    
    k %= nums.size();
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    }
};
