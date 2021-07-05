// Runtime: 28 ms, faster than 83.01% of C++ online submissions for Maximum Subarray Sum with One Deletion.
// Memory Usage: 26.6 MB, less than 8.60% of C++ online submissions for Maximum Subarray Sum with One Deletion.

class Solution {
public:
    void max_subsum(vector<int> &nums,vector<int> &sum){
        int curr_sum = 0;
        int max_sum = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(curr_sum >= 0) curr_sum += nums[i];
            else curr_sum = nums[i];
            sum.push_back(curr_sum);
        }  
    }
    int maximumSum(vector<int>& arr) {
        vector<int> presum;
        vector<int> suffsum;
        max_subsum(arr,presum);
        reverse(arr.begin(),arr.end());
        max_subsum(arr,suffsum);
        reverse(arr.begin(),arr.end());
        reverse(suffsum.begin(),suffsum.end());
        int maxi = INT_MIN;
        int sum = 0;
        for(auto i : arr){
            sum += i;
        }
        for(int i=1;i<arr.size()-1;i++){
            maxi = max(presum[i-1]+suffsum[i+1] , maxi);
        }
        maxi = max(max(arr[0],arr[arr.size()-1]),maxi);
        for(int i=0;i<presum.size()-1;i++){
            maxi = max(maxi,presum[i]);
        }
        /*
        for(auto it : presum){
        cout<<it<<" ";
        }
        cout<<endl;
        for(auto it : suffsum){
        cout<<it<<" ";
        }
        */
        return max(maxi,sum);
    }
};
