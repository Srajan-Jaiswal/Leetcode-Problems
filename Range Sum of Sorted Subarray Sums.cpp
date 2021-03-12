class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    }
    const int mod = 1e9+7;
    vector<int> vec;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int sum= 0 ;
        for(int i=0;i<nums.size();i++){
            sum=0;
            for(int j=i;j<nums.size();j++){
                 sum += nums[j];
                 sum %= mod;
                 vec.push_back(sum);
            }
        }
        sort(vec.begin(),vec.end());
        long long ans=0;
        left = left-1;
        right=right-1;
        while(left<=right){
            ans=ans%mod;
            ans += vec[left];
            left++;
        }
        return ans;
    }
};
