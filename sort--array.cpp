//Runtime: 96 ms, faster than 24.43% of C++ online submissions for Sort an Array.
//Memory Usage: 16.9 MB, less than 27.62% of C++ online submissions for Sort an Array.

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> ans;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(auto it:nums)
        {
           pq.push(it);
        }
        for(int i=0;i<nums.size();i++)
        { 
            int t=pq.top();           
            ans.push_back(t);
            pq.pop();
         }
        return ans;
    }
};
