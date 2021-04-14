// Runtime: 20 ms, faster than 44.81% of C++ online submissions for Ransom Note.
// Memory Usage: 8.7 MB, less than 49.96% of C++ online submissions for Ransom Note.
class Solution {
public:
    unordered_map<int,int> um; 
    bool canConstruct(string ransomNote, string magazine) {
       for(int i=0;i<magazine.size();i++){
          um[magazine[i]]++;
       }        
       for(int i=0;i<ransomNote.size();i++){
           if(um.find(ransomNote[i]) != um.end()){
               um[ransomNote[i]]--;
               if(um[ransomNote[i]]==0) um.erase(ransomNote[i]);
               continue;
           }
           else{
               return false;
           }
       } 
        return true;
    }
};
