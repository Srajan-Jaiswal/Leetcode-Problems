// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Preimage Size of Factorial Zeroes Function.
// Memory Usage: 5.8 MB, less than 65.77% of C++ online submissions for Preimage Size of Factorial Zeroes Function.

class Solution {
public:
    long long cnt_trailing_zeroes(long long  num){
      long long ans=0;
      for(long long  i=5;i<=num;i*=5){
          ans += num/i;
      }
      return ans;  
    } 
    int preimageSizeFZF(int k) {
        long long i=0;
        long long j= LLONG_MAX;
        while(i<=j){
            long long  m = (i+j)/2;
            long long cnt = cnt_trailing_zeroes(m);
            //cout<<cnt<<endl;
            if(cnt==k){
                return 5;
            }
            if(cnt > k){
              j = m-1;
            }
            else{
                i = m+1;
            }
        }
        return 0;
    }
};


