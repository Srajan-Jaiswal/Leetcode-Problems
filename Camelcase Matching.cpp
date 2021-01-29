// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Camelcase Matching.
// Memory Usage: 7.2 MB, less than 90.21% of C++ online submissions for Camelcase

class Solution {
public:
    vector<bool> ans;
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
        for(int i=0;queries.size();i++)
        {
            string str = queries[i];
            int j=0,k=0;
            int len = str.length();
            while(j<len|| k<pattern.length())
            {
              if(j<len && k<pattern.length() && str[j]==pattern[k]) 
               {
                         j++;
                         k++;
               }
                else if(str[j]>90 && j<len){
                j++;
                }
                else{
                    ans.push_back(false);
                    break;
                }
            }
            if(j==str.length() && k==pattern.length()){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};
