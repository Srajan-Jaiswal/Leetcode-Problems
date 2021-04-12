// Runtime: 48 ms, faster than 29.31% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.
// Memory Usage: 10.1 MB, less than 54.86% of C++ online submissions for How Many Numbers Are Smaller Than the Current Number.
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v;
        int maxi;
        for(int i=0;i<nums.size();i++){
            maxi=0;
            for(int j=0;j<nums.size();j++){
                if(j != i and nums[j] < nums[i])
                    maxi++;
            }
            v.push_back(maxi);
        }
        return v;
    }
};
