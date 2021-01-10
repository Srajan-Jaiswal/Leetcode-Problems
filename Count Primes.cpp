// Runtime: 388 ms, faster than 19.41% of C++ online submissions for Count Primes.
// Memory Usage: 6.9 MB, less than 44.54% of C++ online submissions for Count Primes.


class Solution {
public:
    int countPrimes(int n) {
       vector<bool> sieve(n,true);
        for(int i=2;i*i<=n;i++){
            if(sieve[i]==true){
                for(int j=i*i ; j<=n ; j+=i){
                    sieve[j] = false;
                }
            }
        }
        int cnt=0;
        for(int i=2;i<sieve.size();i++){
            if(sieve[i]){
                cnt+=1;
            }
        } 
        return cnt;
    }
};
