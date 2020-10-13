class Solution {
public:
    void reverseString(vector<char>& s) {
        bool flag = true;
        cout<<"[";
        for(int i=s.size()-1;i>=0;i--)
        {
            char z ='"';
            cout<<z<<s[i]<<z;
            if(i==0)
            {
                flag=false;
            }
            if(flag)
            {
                cout<<",";
            }
            
        }
        cout<<"]";
    }
};
