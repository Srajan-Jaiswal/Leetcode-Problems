// Runtime: 200 ms, faster than 55.68% of C++ online submissions for Find the Most Competitive Subsequence.
// Memory Usage: 113.4 MB, less than 16.97% of C++ online submissions for Find the Most Competitive Subsequence
class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        stack<int> s;
        int j =nums.size();
        for (int i = 0; i<j ; i++) {
            if (s.empty() || nums[i] >= s.top()) {
                s.push(nums[i]);
            } 
            else {
                while (!s.empty() && s.top()>nums[i] && s.size()+(j-(i+1)) >= k) {
                    s.pop();
                }
                s.push(nums[i]);
            }
        }
        while (s.size() > k){
            s.pop();
        }
        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
