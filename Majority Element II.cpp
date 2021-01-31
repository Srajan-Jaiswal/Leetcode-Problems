// Unordered_Map
O(N) time : O(N) space

class Solution {
public:
    unordered_map<int,int> um;
    vector<int> ans;
    vector<int> majorityElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            um[nums[i]]++;
        }
        for(auto it: um)
        {
            if(it.second>nums.size()/3){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

// Sorting 
O(NlogN) time : O(N) Space

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums){
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int l=0, cnt = 1, r=0;
        
        for(int i=1;i<nums.size();i++){
            if(nums[l]==nums[i]){
                cnt++;
            }
            else{
                if(cnt > (nums.size()/3)){
                    ans.push_back(nums[l]);
                }
                l = i;
                cnt = 1;
            }
        }
        if(cnt>(nums.size()/3)){
            ans.push_back(nums[l]);
        }
        return ans;
    }
};
