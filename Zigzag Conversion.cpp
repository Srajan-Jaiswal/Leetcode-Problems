class Solution {
public:
    string convert(string s, int n) {
        if(s.length()<=1 or s.length()<=n or n==1)
			return s;
        string res(s.length(),' ');
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<s.length();j+=2*n-2){
                if(i!=0 and i!=n-1){
                    res[count++] = s[j];
                    if(j+2*(n-i-1)<s.length()){
                        res[count++] = s[j+2*(n-i-1)];
                    }
                }
                else{
                    res[count++] = s[j];
                }
            }
        }
        return res;
    }
};
