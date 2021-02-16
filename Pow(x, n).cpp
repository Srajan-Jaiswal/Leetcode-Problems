// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pow(x, n).
// Memory Usage: 5.8 MB, less than 86.08% of C++ online submissions for Pow(x, n).

class Solution {
public:
    int ans = 1;
     double powi(double i , long long int j){
        if(j==1) return i;
        if(j==0) return 1.0;
        if(j<0) return powi(1/i,-j); 
         double res = 1;
        if(j%2==0){                // optimising calculations  for higher inputs 
            res = powi(i,j/2);
            res *= res;
        }
        else{
            res = powi(i,j-1);
            res *= i;
        }
        return res;
    }
    double myPow(double x, int n) {
      return  powi(x,n);
    }
};
