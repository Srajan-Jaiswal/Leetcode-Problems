// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Add Strings.
// Memory Usage: 7 MB, less than 87.64% of C++ online submissions for Add Strings.
class Solution {
public:
    string addStrings(string num1, string num2) {
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        int n=max(num1.size(),num2.size());
        int carry=0;
        string sum;
        for(int i=0;i<n;i++){
            if (i<num1.size()) carry+=num1[i]-'0';
            if (i<num2.size()) carry+=num2[i]-'0';
            sum.push_back(carry%10+'0');
            carry/=10;
        }
        if (carry) sum.push_back('1');
        reverse(sum.begin(),sum.end());
        return sum;
    }
};
