// Runtime: 140 ms, faster than 21.20% of C++ online submissions for Max Consecutive Ones III.
// Memory Usage: 55.2 MB, less than 99.70% of C++ online submissions for Max Consecutive Ones III.
class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
        int i=0,cnt=0,j=0;
        bool flag = 0;
        int ans = 0;
        if(K==0)
        {
            flag=1;
        }
        while(i>=j && i<A.size())
        {
           if(A[i]==1)
           {
               i++;
               cnt++;
               if(cnt>ans){
               ans = cnt;
           }
               continue;
           }
           else if(A[i]==0 && K==0 && flag)
           {
               cnt=0;
               i++;
               continue;
           }
           else if(A[i] == 0 && K>0)
           {
               cnt++;
               i++;
               K--;
               if(cnt>ans){
               ans = cnt;
           }
               //cout<<cnt<<endl;
               continue;
           }
           while(A[j]!=0){ 
           j++; 
           cnt--;    
           }
           cnt--; 
           K++;
           j++;
        }
          return ans;  
    }
};
