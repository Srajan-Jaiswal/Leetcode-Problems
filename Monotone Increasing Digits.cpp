// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Monotone Increasing Digits.
// Memory Usage: 5.9 MB, less than 89.46% of C++ online submissions for Monotone Increasing Digits.

class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        string str = to_string(N);
        int len = str.length();
        for(int i=len-1; i>0; i--){
            if(str[i] > str[i-1]){
                continue;
            }
            else if(str[i] < str[i-1]){
                len = i-1;
                str[i-1] -= 1;
            }
        }
        for(int i=len+1;i<str.length();i++) str[i]='9';
        return  stoi(str);
    }
};
