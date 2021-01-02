// Runtime: 64 ms, faster than 23.67% of C++ online submissions for Valid Anagram.
// Memory Usage: 7.8 MB, less than 7.30% of C++ online submissions for Valid Anagram.
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            return true;
        }
        else{
            return false;
        }
    }
};
