// Runtime: 444 ms, faster than 21.25% of C++ online submissions for Contiguous Array.
// Memory Usage: 83.8 MB, less than 5.19% of C++ online submissions for Contiguous Array.

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int cnt0=0;
        int cnt1=0;
        int ans =0;
        int key = cnt0-cnt1;
        map<int,int> m;
        m.insert({key,0});
        for(int i=0;i<nums.size();i++)
        {
             if(nums[i]==1){
                cnt1++;
             }
             else{
                cnt0++;
             }
            key=cnt0-cnt1;
            if(key==0)
            {
             ans = i+1;
            }
            if(m.find(key)!=m.end())
            {
              ans = max(ans,i-m[key]);
            }
            else{
                m[key]=i;
            }
        }
        return  ans;
    }
};
