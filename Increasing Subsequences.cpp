Runtime: 232 ms, faster than 32.30% of C++ online submissions for Increasing Subsequences.
Memory Usage: 30.6 MB, less than 41.92% of C++ online submissions for Increasing Subsequences.

class Solution {
public:

    map<string,int> m;
    vector<vector<int>> v;
   void rec_substr(string in,string out)
    {
        if(in.length()==0)
        {
            m[out]++;
            return;
        }
        string out1 = out;
        string out2 = out;
        out2+=in[0];
        in.erase(in.begin()+0);
        
        rec_substr(in,out1);
        rec_substr(in,out2);
       return;
    }
    
    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        string in = "";
        for(int i=0;i<nums.size();i++)
        {
            in+=to_string(nums[i]);
        }
        //cout<<in<<endl;
        string out ="";
        rec_substr(in,out);
      
        for(auto it : m)
        {
            if(it.first.length()>1){
             vector<int> v1;
                string temp = it.first;
                bool flag =0;
                int i;
                for( i=0;i<temp.length()-1;i++)
                {
                    if(temp[i]<=temp[i+1]){
                      flag=0;
                    }
                    else{
                        flag=1;
                    }
                }
                if(flag==0){
                    for( i=0;i<temp.length();i++)
                {
                    v1.push_back(temp[i]-'0');
                    }
                }
                if(v1.size()>0){
                v.push_back(v1);
                }
            }
        }
        return v;
        
    }
};
