// Runtime: 144 ms, faster than 91.53% of C++ online submissions for Number of Matching Subsequences.
// Memory Usage: 36.3 MB, less than 79.49% of C++ online submissions for Number of Matching Subsequences.

class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    int numMatchingSubseq(string S, vector<string>& words) {
        map<string,int> m;
        for(int i=0;i<words.size();i++)
            m[words[i]]++;
        int c=0;
        for(auto it=m.begin(); it!=m.end();it++){
            int j=0;
            string s=it->first;
            for(int l=0;l<S.size() && j<s.size();l++){
                if(s[j]==S[l])
                    j++;
            }
            if(j==s.size())
                c+=it->second;   
        }
        return c;
    }
};
