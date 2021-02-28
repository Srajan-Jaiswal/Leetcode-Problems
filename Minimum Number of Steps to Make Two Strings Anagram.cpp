// Runtime: 128 ms, faster than 24.65% of C++ online submissions for Minimum Number of Steps to Make Two Strings Anagram.
// Memory Usage: 19.4 MB, less than 6.01% of C++ online submissions for Minimum Number of Steps to Make Two Strings Anagram.

class Solution {
public:
    unordered_map<char,int> freq;
    int minSteps(string s, string t) {
        int sum = 0;
        for(char i: s) freq[i]++;
        for(char j: t){
            if(freq.find(j) != freq.end())
                freq[j]--;
                if(freq[j]==0) freq.erase(j);
        }
        for(auto it: freq) {
          if(it.second!=-1)sum += it.second;
        }
        return  sum;
    }
};
