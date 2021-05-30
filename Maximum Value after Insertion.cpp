// Runtime: 84 ms, faster than 66.67% of C++ online submissions for Maximum Value after Insertion.
// Memory Usage: 35.8 MB, less than 66.67% of C++ online submissions for Maximum Value after Insertion.
class Solution {
public:
    string maxValue(string n, int x) {
        int len = n.length();
        string ans = " ";
        if(n[0] != '-'){
            int i = 0;
            while(i < len && x+'0' <= n[i]) i++;
            string a = n.substr(0,i);
            string b = n.substr(i,len);
            a+=x+'0';
            ans = a+b;
        }
        else{
            int i = 1;
            while(i < len && x+'0' >= n[i] ) i++;
            string a = n.substr(1,i-1);
            string b = n.substr(i,len);
            a+=x+'0';
            ans = '-'+a+b;
        }
        return ans;
    }
};
