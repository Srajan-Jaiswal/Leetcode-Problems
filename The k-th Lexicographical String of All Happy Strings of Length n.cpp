// Runtime: 32 ms, faster than 39.31% of C++ online submissions for The k-th Lexicographical String of All Happy Strings of Length n.
// Memory Usage: 22.8 MB, less than 13.01% of C++ online submissions for The k-th Lexicographical String of All Happy Strings of Length n.

class Solution {
public:
    vector<string> v;
    void store_strings(int n,string str,char last) 
    {
        if(n==0){
           v.push_back(str); 
           return;
        }
        else if(last == '#'){
            store_strings(n-1,str+"a",'a');
            store_strings(n-1,str+"b",'b');
            store_strings(n-1,str+"c",'c');
        }
        else if(last == 'a'){
            store_strings(n-1,str+"b",'b');
            store_strings(n-1,str+"c",'c');
        }
        else if(last == 'b'){
            store_strings(n-1,str+"a",'a');
            store_strings(n-1,str+"c",'c');
        }
        else{
            store_strings(n-1,str+"a",'a');
            store_strings(n-1,str+"b",'b');
        }
    }    
    string getHappyString(int n, int k) {
       string str="";
       char last='#';
       store_strings( n,str,last);
        if(v.size()<k)
        {
            return "";
        }
        else{
            return v[k-1];
        }
    }   
};
