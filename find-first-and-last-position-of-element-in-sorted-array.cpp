//Runtime: 16 ms, faster than 92.48% of C++ online submissions for Find First and Last Position of Element in Sorted Array.
//Memory Usage: 13.8 MB, less than 62.91% of C++ online submissions for Find First and Last Position of Element in Sorted Array.


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n= binary_search(nums.begin(),nums.end(),target);
        if(n){
        int uper = upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        int lower = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        ans.push_back(lower);
        ans.push_back(uper-1);
        return ans;
        }
        else{
        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
        }
    }
};
