// Runtime: 432 ms, faster than 43.07% of C++ online submissions for Sliding Window Maximum.
// Memory Usage: 119.4 MB, less than 22.69% of C++ online submissions for Sliding Window Maximum.

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;
        int i = 0;
        int n = nums.size();
        vector<int> ans;
        while(i < n){
            while(!dq.empty() && nums[dq.back()] <= nums[i])
            {
                 dq.pop_back();
            }
            while(!dq.empty() && dq.front() <= i - k)
            {
                dq.pop_front();
            }
            dq.push_back(i);
            i++;
            if(i >= k){
                ans.push_back(nums[dq.front()]);
            }
            }
        return ans;
    }
};
