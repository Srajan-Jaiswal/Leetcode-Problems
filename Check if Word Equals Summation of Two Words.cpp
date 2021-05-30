class Solution {
public:
    bool isSumEqual(string fw, string sw, string tw) {
          string fw_num="",sw_num="",tw_num=""; 
          for(int i=0;i<fw.length();i++){
              fw_num += to_string((fw[i]-'a'));
          }
         for(int i=0;i<sw.length();i++){
              sw_num += to_string((sw[i]-'a'));
          }
          for(int i=0;i<tw.length();i++){
              tw_num += to_string((tw[i]-'a'));
          } 
        int a = stoi(fw_num);
        int b = stoi(sw_num);
        int c = stoi(tw_num);
        if(a+b == c) return  true;
        return false;
          
    }
};
