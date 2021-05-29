class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<string,int> um;
        string str = "";
        if(s.length() < 3){
            return  0;
        }
        for(int i=0;i<s.length()-2;i++){
            str="";
            for(int j=i;j<i+3;j++){
                str += s[j];
                
            }
            //cout<<str<<endl;
            if(str[0] != str[1] && str[1] != str[2] && str[0] != str[2]){
                //cout<<str<<"->"<<str.length()<<endl;
                um[str]++;
            }
        }
        int cnt =0;
        for(auto it : um){
            cnt += it.second;
        }
        return cnt;
    }
};
