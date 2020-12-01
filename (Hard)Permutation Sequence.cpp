// unoptimised (TLE)
// Test cases cleared 

class Solution {
public:
    set<string> dict;
    void make_permutations(string in, string out)
    {
        if(in.length()==1)
        {
            dict.insert(out+in);
            return; 
        }
        for(int i=0;i<in.length();i++)
        {
            make_permutations(in.substr(1),out+in[0]);
            rotate(in.begin(), in.begin()+1,in.end());
        }
    }
    string getPermutation(int n, int k) {
        string s = "";
        for(int i=1;i<=n;i++)
        {
          string it = to_string(i);  
          s += it; 
        } 
        //cout<<s;
        string op = "";
        make_permutations(s,op);
        set<string>::iterator it;
        //for (it = dict.begin(); it!=dict.end();  ++it) 
        //{   
        //    cout<<it<<endl;
        //}
        int i = 1;
        for (it = dict.begin(); it!=dict.end();  ++it) 
        {   if(i>=k){
            break;
        }
         dict.erase(it);
         i++;
        }
        
        auto mn = dict.begin();
        string ans = *mn;
        return ans;
    }
};
