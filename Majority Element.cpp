Runtime: 60 ms, faster than 25.74% of C++ online submissions for Majority Element.
Memory Usage: 20.2 MB, less than 5.44% of C++ online submissions for Majority Element.

class Solution {
public:
    map<int,int> m;
    int ans=INT_MIN;
    int majorityElement(vector<int>& nums){
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int n = nums.size();
        int half=0;
        if(n%2==0){
            half = n/2;
        }else{
            half = n/2+1;
        }
        for(auto it:m)
        {
            if(it.second >= half && it.first>ans ){
                ans=it.first;
            }
        }
        return ans;
    }
};
