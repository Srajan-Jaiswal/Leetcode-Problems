Runtime: 4 ms, faster than 90.74% of C++ online submissions for Multiply Strings.
Memory Usage: 6.5 MB, less than 90.35% of C++ online submissions for Multiply Strings.

class Solution {
public:
    string multiply(string num1, string num2) {
        vector<char> ans((num1.size()+num2.size()), '0');
        if(num1 == "0" || num2 == "0"){
            return "0";
        }
        for(int i=num1.size()-1;i>=0;i--){
            int c=0;
            for(int j=num2.size()-1;j>=0;j--){
                int temp= (ans[i+j+1]-'0')+ (num1[i]-'0')*(num2[j]-'0') +c;
                ans[i+j+1]=temp%10 +'0';
                c=temp/10;
            }
            ans[i]= (ans[i]-'0' + c)+'0';
        }
        string op="";
        int i=0;
        while(i< ans.size() && ans[i]=='0'){
            i++;
        }
        while(i<ans.size()){
            op += ans[i];
            i++;
        }
        return op;
    }
};
