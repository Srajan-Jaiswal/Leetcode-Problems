Runtime: 32 ms, faster than 88.66% of C++ online submissions for Top K Frequent Elements.
Memory Usage: 14 MB, less than 56.56% of C++ online submissions for Top K Frequent Elements.


class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
          mp[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it:mp)
        {
            pair<int,int> p = make_pair(it.second,it.first);
            pq.push(p);
         }
              while(!pq.empty() && k>0)
              {
              pair<int,int> p2=pq.top();
              pq.pop();
              ans.push_back(p2.second);
                  k--;
              }
        return ans;
    }
    
};
