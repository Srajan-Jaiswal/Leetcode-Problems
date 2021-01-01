// Runtime: 8 ms, faster than 42.46% of C++ online submissions for Longest Common Prefix.
// Memory Usage: 9.7 MB, less than 34.01% of C++ online submissions for Longest Common Prefix.

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0){
            return "";
        }
        else if(strs.size()==1){
            return strs[0];
        }
        string str1 = strs[0];
        string str2 = strs[1];
        string str3 = "";
        int i=0;
        int j=0;
        while(i<str1.length() && j<str2.length())
        {
           if(str1[i] == str2[j])
           {
               str3 += str1[i];  
               i++;
               j++;
           }
            else{
                break;
            }
        }
        //cout<<str3<<" ";
        for(int z=2;z<strs.size();z++){
            string curr = strs[z];
            string help = "";
            int k = 0;
            while(k<str3.length())
            {
                if(curr[k] == str3[k])
                {
                    help += str3[k];
                    k++;
                }
                else{
                    break;
                }
            }
            //cout<<str3<<" ";
            str3.clear();
            str3 = help;
            help.clear();
        }
        return  str3;
    }
};
