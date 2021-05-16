class Solution {
public:
    unordered_map<int,vector<int>> um;
    int findShortestSubArray(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        
        vector<int> freq(500001,0);
        for(int i=0;i<nums.size();i++){
            um[nums[i]].push_back(i);
        }
        int maxi = INT_MIN;
        int high_deg;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            if(freq[nums[i]] > maxi ){
                maxi = freq[nums[i]];
                high_deg = nums[i];
            }
        }
  
        //cout<<high_deg<<endl;
        vector<int> ans = um[high_deg];
        //cout<<ans[0]<<" "<<ans[ans.size()-1]<<endl;
        return (ans[ans.size()-1]-ans[0])+1;
    }
};
