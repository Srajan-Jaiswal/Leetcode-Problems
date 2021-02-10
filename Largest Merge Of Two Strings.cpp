// Runtime: 32 ms, faster than 90.82% of C++ online submissions for Largest Merge Of Two Strings.
// Memory Usage: 9.6 MB, less than 85.90% of C++ online submissions for Largest Merge Of Two Strings.
class Solution {
public:
    string largestMerge(string word1, string word2) {
        int i=0,j=0;
        string merge;
        while(i<word1.length() && j<word2.length())
        {
            if(word1[i]-'a' > word2[j]-'a'){
                merge += word1[i];
                i++;
            }
            else if(word1[i]-'a' < word2[j]-'a'){
                merge += word2[j];
                j++;
            }
            else{
                int f1=i,f2=j;
                while(word1[f1]-'a' == word2[f2]-'a' && f1<word1.length() && f2<word2.length() ){
                    //cnt+=1;
                    //cout<<cnt<<endl;
                    //merge+=word1[i];
                    f1++;
                    f2++;   
                }
                if(f1==word1.length()){
                    merge += word2[j];
                    j++;
                }
                else if(f2==word2.length()){
                    merge += word1[i];
                    i++;
                }
                else if(word1[f1]-'a' > word2[f2]-'a'){
                    merge += word1[i];
                    i++;
                }
                 else if(word1[f2]-'a' > word2[f1]-'a'){
                    merge += word2[j];
                    j++;
                }
            }  
        }
        while(i<word1.length()){
            merge += word1[i];
            i++;
        }
        while(j<word2.length()){
            merge += word2[j];
            j++;
        }
        return merge;
    }
};

