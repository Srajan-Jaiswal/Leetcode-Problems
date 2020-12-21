// Runtime: 96 ms, faster than 73.95% of C++ online submissions for Count the Number of Consistent Strings.
// Memory Usage: 30.6 MB, less than 53.19% of C++ online submissions for Count the Number of Consistent Strings.

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt,res=0;
        vector<bool> v(26,false);
        for(auto it: allowed)
        {
            v[it-97]=true;
        }
        for(auto it: words)
        {
            string str = it;
            for(auto i: str)
            {
                cnt=1;
                if(v[i-97]==false)
                {
                    cnt = 0;
                    break;
                }
            }
           res += cnt; 
        }
        return res;
    }
};
