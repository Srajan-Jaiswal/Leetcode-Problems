// Runtime: 208 ms, faster than 28.81% of C++ online submissions for Find Words That Can Be Formed by Characters.
// Memory Usage: 27 MB, less than 33.04% of C++ online submissions for Find Words That Can Be Formed by Characters.

class Solution {
public:
    unordered_map<int, int> m;
     int sum = 0;
    int countCharacters(vector<string>& words, string chars) {
        for(int i=0;i<chars.length();i++){
            m[chars[i]]++;
        }
        int i=0;
        for(string& str : words){
            unordered_map<int, int> tmp;
            for(i=0; i<str.size(); ++i){
                tmp[str[i]]++;
                if(tmp[str[i]] > m[str[i]]){
                   break; 
                }
            }
            if(i == str.size()){
                sum += i;
            }
        }
        return sum;
    }
};
