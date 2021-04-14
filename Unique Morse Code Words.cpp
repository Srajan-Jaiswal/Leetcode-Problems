// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Morse Code Words.
// Memory Usage: 8.7 MB, less than 23.12% of C++ online submissions for Unique Morse Code Words.

class Solution {
public:
    vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    set<string> s; 
    int uniqueMorseRepresentations(vector<string>& words) {
        for(string str:words){
            string ans = "";
            for(char c : str) ans += v[c-'a'];
            s.insert(ans);
        }
        return s.size();
    }
};
