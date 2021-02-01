// Runtime: 176 ms, faster than 14.75% of C++ online submissions for Find All Numbers Disappeared in an Array.
// Memory Usage: 47.3 MB, less than 5.04% of C++ online submissions for Find All Numbers Disappeared in an Array.

class Solution {
public:
    set<int> s;
    vector<int> ans;
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for(int i=1;i<=nums.size();i++){
            if(s.find(i) == s.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
