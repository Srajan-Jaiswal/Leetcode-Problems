// Runtime: 56 ms, faster than 87.38% of C++ online submissions for Check If a String Can Break Another String.
// Memory Usage: 14.1 MB, less than 5.27% of C++ online submissions for Check If a String Can Break Another String.

class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    }
    bool check(string s1,string s2){
        if(s1.length()==1){
            return s1>s2?1:0;
        }
        for(int i=0;i<s1.length();i++){
            if(s1[i]>=s2[i]){
                if(i==s1.length()-1) return true;
                continue;
            }
            break;
        }
        return false;
    }
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return check(s1,s2) || check(s2,s1);
    }
};
