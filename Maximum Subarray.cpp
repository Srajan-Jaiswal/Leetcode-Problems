// Runtime: 4 ms, faster than 99.92% of C++ online submissions for Maximum Subarray.
// Memory Usage: 13.1 MB, less than 100.00% of C++ online submissions for Maximum Subarray.


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
         int end =0;
        for(int i=0;i<nums.size();i++){
            end+=nums[i];
            
            if(end>maxi)
            {
                maxi=end;
            }
            if(end<0)
            {
                end=0;
            }
        }
        return maxi;
    }
};
