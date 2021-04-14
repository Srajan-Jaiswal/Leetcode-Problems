// Runtime: 4 ms, faster than 94.51% of C++ online submissions for Valid Palindrome.
// Memory Usage: 7.9 MB, less than 6.30% of C++ online submissions for Valid Palindrome.

class Solution {
public:
    bool palin(string str){
        int i=0,j=str.length()-1;
        while(i<=j){
            if(str[i]==str[j]){
                i++;
                j--;
                continue;
            }
            else return false;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string str = "";
        for(int i=0;i<s.length();i++){
        if((s[i]>=97 && s[i]<=122) || (s[i]>=65 && s[i]<=90) || (s[i]>=48 && s[i]<=57))str+=tolower(s[i]);
        }
        return  palin(str);
    }
};
