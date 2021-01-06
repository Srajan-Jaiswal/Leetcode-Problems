// Runtime: 340 ms, faster than 59.39% of C++ online submissions for Split a String Into the Max Number of Unique Substrings.
// Memory Usage: 44.5 MB, less than 50.00% of C++ online submissions for Split a String Into the Max Number of Unique Substrings.


class Solution {
public:
unordered_set<string> s;
int ans=0;
void uni_sub(string &str,int idx)
{
    if(s.size()>ans)
    {
        ans=s.size();
    }
    if(idx>str.length()){
        return;
    }
    
     string temp ="";
    for(int i=idx;i<str.length();i++)
    {
        temp += str[i];
        if(s.find(temp) == s.end())
        {
            s.insert(temp);
            uni_sub(str,i+1);
            s.erase(temp);
        }
    }
}
    int maxUniqueSplit(string s) {
    uni_sub(s,0);
    return ans;
    }
};
