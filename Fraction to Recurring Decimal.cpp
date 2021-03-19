// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Fraction to Recurring Decimal.
// Memory Usage: 6.3 MB, less than 87.30% of C++ online submissions for Fraction to Recurring Decimal.

class Solution {
public:
    unordered_map<long,int> um;
    string fractionToDecimal(int num, int den) {
        string ans = "";
        if(num == 0) return ans+="0";
        
        if ((num < 0 &&  den > 0) || (num > 0 &&  den < 0)) {
            ans += '-';
        }
        num = abs(num);
       den = abs(den);
        long  q = num/den;
        long rem = num%den;
        if(rem == 0){
            ans += to_string(q);
            return ans;
        }
        else{
            bool flag = false;
            ans += to_string(q);
            ans+= ".";
            while(rem != 0){
                if(um.find(rem) != um.end()){
                ans.insert(um[rem], "(");
                ans += ')';
                break;
                }
                um[rem] = ans.size();
                rem *= 10;   
                q = rem/den;
                ans += to_string(q);
                rem = rem%den;
            }
        }
        return ans;
    }
};

