class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] <  k){
                cnt++;
            }
        }
        cout<<cnt<<endl;
        int i=0,j=0;
        long long prod = 1;
        while(j<nums.size()){
            prod = prod*nums[j];
            if(prod < k){
                if(j-i+1 > 1)cnt++;
                cout<<cnt<<endl;//1
            }
            cout<<prod<<endl;
            if(prod >= k){
                while(i<j && prod >= k){
                    prod = prod /nums[i];
                    cout<<prod<<endl;
                    i++;
                    if(j-i+1 > 1 && prod<k)cnt++; 
                    cout<<"->"<<cnt<<endl;// 2
                }
            }
            if(j==nums.size()-1){
               while(i<j){
                    prod = prod /nums[i];
                    i++;
                    if(j-i+1 > 1)cnt++;
                } 
            }
            j++;
        }
        return cnt;
    }
};
