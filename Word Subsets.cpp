// Brute Force(TLE) O(N2)

class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        bool flag;
        unordered_map<char,int> um;
        unordered_map<char,int> hash;
        vector<string> ans;
        for(string &it: A){
            for(int i=0;i<it.length();i++){
                um[it[i]]++;
         }
         for(string &str : B){
             hash = um;
             flag = true;
             for(int j=0;j<str.length();j++){
                 if(hash.find(str[j])== hash.end()){
                     flag = false;
                      break;
                 }
                 else{
                     hash[str[j]]--;
                     if(hash[str[j]]==0){
                         //cout<<123<<endl;
                         cout<<endl;
                         hash.erase(str[j]);  
                     }
                 }
                 
             }
             hash.clear();
             if(!flag){
                 break;
             }
         }
            if(flag){
                ans.push_back(it);
             }
            um.clear();
     }
        return ans;
    }
};





// OPTIMISED O(N+N)

class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        int maxFreq[26] = {0};
        for(string str:B)
        {
            int freq[26]={0};
            for(char c:str){
                freq[c-'a']++;
            }
            for(int i=0;i<26;i++){
                maxFreq[i] = max(maxFreq[i],freq[i]);
            }
        }
        vector<string> out;
        for(string str:A)
        {
            bool flag=true;
            int freq[26]={0};
            for(char c:str){
                freq[c-'a']++;
            }
            for(int i=0;i<26;i++)
            {
                if(maxFreq[i]>freq[i])
                {
                    flag = false;
                    break;
                }
            }
            if(flag)
                out.push_back(str);
        }
        return out;
    }
};
