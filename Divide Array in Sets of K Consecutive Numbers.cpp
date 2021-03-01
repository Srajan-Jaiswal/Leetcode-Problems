// Runtime: 160 ms, faster than 88.30% of C++ online submissions for Divide Array in Sets of K Consecutive Numbers.
// Memory Usage: 49.9 MB, less than 59.08% of C++ online submissions for Divide Array in Sets of K Consecutive Numbers.
class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    }
    map<int,int> freq;
    bool isPossibleDivide(vector<int>& nums, int k) {
        if(nums.size()%k != 0) return false; 
        int ans=0;
        for(int i : nums) freq[i]++;
        while(!freq.empty()){
            int top = freq.begin()->first;
            for(int i=0;i<k;i++){
              if(freq.find(top + i) != freq.end()){
                  freq[top + i]--;
                  if(freq[top + i] == 0) freq.erase(top + i);
              }
                else return false;
            }
        }
        return  true;
    }
};
