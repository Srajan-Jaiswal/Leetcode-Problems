// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Sqrt(x).
// Memory Usage: 5.7 MB, less than 100.00% of C++ online submissions for Sqrt(x).

class Solution {
public:
    int mySqrt(int x) {
        if(x==2 && x==1)
        {
            return 1;
        }
        int l=1,r=x;
        while(l<=r)
        {
            long int mid = l+(r-l)/2;
            if(mid*mid == x){
                return  mid;
            }
            if(mid*mid > x)
            {
                r = mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return r;
    }
};
