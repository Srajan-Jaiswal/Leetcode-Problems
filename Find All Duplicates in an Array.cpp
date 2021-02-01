// Runtime: 148 ms, faster than 24.83% of C++ online submissions for Find All Duplicates in an Array.
// Memory Usage: 45 MB, less than 13.92% of C++ online submissions for Find All Duplicates in an Array.

class Solution {
public:
    unordered_map<int,int> um; 
    vector<int> ans;
    vector<int> findDuplicates(vector<int>& nums) {
        for(auto it: nums){
            um[it]++;
        }
        for(auto i: um){
            if(i.second>=2){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
