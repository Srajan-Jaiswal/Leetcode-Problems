// Runtime: 4 ms, faster than 93.67% of C++ online submissions for Search Insert Position.
// Memory Usage: 9.6 MB, less than 85.17% of C++ online submissions for Search Insert Position.


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int it;
     bool f = binary_search(nums.begin(),nums.end(),target);
        if(f){
          it = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            return it;
        }
        else{
            it = upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        }
        return it;
    }
};
