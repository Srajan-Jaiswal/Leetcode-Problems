class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      unordered_map<char,int> um,um1;
      for(int i=0;i<s1.length();i++){
          um[s1[i]]++;
      } 
      int i=0;
      int j=0;
        um1 = um;
      while(j<s2.length()){
         
          if(um.find(s2[j]) != um.end() && um1[s2[j]] != 0 ) um1[s2[j]]--;
         if(um1[s2[j]] == 0){
              cout<<"hello Srajan"<<endl;
              um1.erase(s2[j]);
          }
          cout<<s2[j]<<endl;

          
          
          if(j-i+1 == s1.length()){
              cout<<j-i+1<<endl;
            
              for(auto it : um1){
              cout<<it.first<<" "<<it.second<<endl;
              }
              if(um1.size()==0) return  true;
              else{
                  j++;
                  //if(um1.find(s2[i]) != um1.end()) um1[s2[i]]--;
                  //if(um1[s2[i]] == 0) um1.erase(s2[i]);
                  if(um.find(s2[i]) != um.end()) um1[s2[i]]++;
                  i++;
                  
                  continue;
              }
          }
          j++;
      }  
      return false;  
    }
};
