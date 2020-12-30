// Runtime: 80 ms, faster than 10.65% of C++ online submissions for Single Number.
// Memory Usage: 21.2 MB, less than 7.98% of C++ online submissions for Single Number.

class Solution {
public:
    map<int,int> m; 
    int ans;
    int singleNumber(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto it: m)
        {
            if(it.second == 1){
                ans = it.first;
            }
        }
    return ans;
    }
};
