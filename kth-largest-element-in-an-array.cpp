Runtime: 36 ms, faster than 31.70% of C++ online submissions for Kth Largest Element in an Array.
Memory Usage: 10.4 MB, less than 18.35% of C++ online submissions for Kth Largest Element in an Array.

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        int t;
        priority_queue<int,vector<int>,greater<int>> min_heap;
        for(int i=0;i<n;i++)
        {
          min_heap.push(nums[i]);
          if(min_heap.size()>k)
          {
              t = min_heap.top();
              min_heap.pop();
          }
        }
        return min_heap.top();
    }
};
