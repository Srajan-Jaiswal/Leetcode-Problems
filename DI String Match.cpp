// Runtime: 0 ms, faster than 100.00% of C++ online submissions for DI String Match.
// Memory Usage: 9.4 MB, less than 60.39% of C++ online submissions for DI String Match.

class Solution {
public:
    vector<int> diStringMatch(string S) {
         vector<int> vec;
        int i=0;
        int n=S.length();
        int cnt1=0;
        int cnt2=S.length();
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='I')
            {
                vec.push_back(cnt1);
                cnt1++;
            }
            else if(S[i]=='D'){
                vec.push_back(cnt2);
                cnt2--;
            }
        }
        if(vec.size()<n+1)
        {
            int m = vec.size()-1;
            if(S[m]=='I')
            {
              vec.push_back(vec[m]+1);
            }
            else{
                vec.push_back(vec[m]-1);
            }
        }
        return vec;
    }
};
