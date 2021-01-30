// Runtime: 12 ms, faster than 83.78% of C++ online submissions for Remove Duplicates from Sorted Array.
// Memory Usage: 15.4 MB, less than 11.56% of C++ online submissions for Remove Duplicates from Sorted Array.

class Solution {
public:
    set<int> s;
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        for(int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        nums.clear();
        for(auto it : s)
        {
            nums.push_back(it);
        }
        return s.size();
    }
};
