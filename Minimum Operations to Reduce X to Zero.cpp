// Runtime: 436 ms, faster than 22.27% of C++ online submissions for Minimum Operations to Reduce X to Zero.
// Memory Usage: 168.1 MB, less than 16.54% of C++ online submissions for Minimum Operations to Reduce X to Zero.

class Solution {
public:
    unordered_map<int,int> prefix;
       int minOperations(vector<int>& nums, int x) {
        int sum = 0;
        prefix[0]=0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            prefix[sum] = i+1;
        }
        if(x > sum){
            return -1;
        }
        if(x == sum){
            return nums.size();
        }
        int end_sum = 0;
        int ans = INT_MAX;
           int j = nums.size()-1;
        while(j>=0){
            int k = x - end_sum;
            if(prefix.find(k) != prefix.end()){
                ans = min(ans, prefix[k] + int(nums.size())-j-1);
            }
           end_sum += nums[j];
            j--;
        }
        if(ans>nums.size()){
            return -1;
        }
           return ans;
    }
};


