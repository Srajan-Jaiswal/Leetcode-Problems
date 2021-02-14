// Runtime: 92 ms, faster than 99.20% of C++ online submissions for Maximum Profit of Operating a Centennial Wheel.
// Memory Usage: 81.5 MB, less than 60.00% of C++ online submissions for Maximum Profit of Operating a Centennial Wheel.

class Solution {
public:
    int minOperationsMaxProfit(vector<int>& customers, int bc, int rc) {
        int i=0;
        int r=1;
        int cus = 0;
        int rem = 0;
        int  ans= INT_MIN;
        int sub;
        unordered_map<int,int> um; 
        while(i<=customers.size() || rem>0){
            sub = rc * r;
            if(i>=customers.size()){
                if(rem >= 4){
                cus += 4;
                rem = rem-4;
                ans = cus*bc-sub;
                    um[ans]=i+1;
                    //cout<<ans<<endl;
                    i++;
            }
                else{
                 cus += rem;
                    //cout<<cus<<endl;
                 ans = (cus*bc-sub);
                   // cout<<ans;
                    um[ans]=i;
                    rem=0;
                     i++;
            }
            r++;
              
            }
            else{
            
            customers[i] += rem;
            //cout<< customers[i]<<endl;
            if(customers[i] >= 4){
                cus += 4;
                //cout<<cus<<endl;
                ans = cus*bc-sub;
                um[ans]=i;
               //cout<<ans<<endl;
                rem = customers[i]-4;
            }
            else{
                cout<<"srajan"<<endl;
                 cus += customers[i];
                 ans = cus*bc-sub;
                 um[ans]=i;
                // cout<<ans<<endl;
            }
                 i++;
                r++;
            }
         
        }
        for(auto u: um){
            ans = max(ans,u.first);
            cout<< u.first<<"->"<<u.second<<endl;
        }
        if(ans<0){
            return -1;
        }
        
        return um[ans];
        
    }
};
