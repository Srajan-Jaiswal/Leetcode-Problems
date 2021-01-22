// Runtime: 24 ms, faster than 96.40% of C++ online submissions for Add to Array-Form of Integer.
// Memory Usage: 28.6 MB, less than 48.92% of C++ online submissions for Add to Array-Form of Integer.


class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        vector<int>result;
        int carry=0;
        for(int i=A.size()-1;i>=0;i--)
        {        
            int sum=A[i]+carry+K%10;
            K/=10;
            carry=sum/10;
            result.push_back(sum%10);  
        }
        while(K!=0){
            int sum=carry+K%10;
            K/=10;
            carry=sum/10;
            result.push_back(sum%10);
        }
        if(carry>0) {
            result.push_back(carry);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
