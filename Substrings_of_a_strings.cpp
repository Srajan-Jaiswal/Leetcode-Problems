set<string> s;
int ans=0;
void recurse(string &str,int idx)
{
    if(idx>str.length()){
    
        return;
        
    }
    
    string temp ="";
    for(int i=idx;i<str.length();i++)
    {
        temp += str[i];
        if(s.find(temp) == s.end())
        {
            s.insert(temp);
            recurse(str,i+1);
        }
    }
}

int main()
{
    string str;
    cin>>str;
    recurse(str,0);
    for(auto it: s)
    {
        cout<<it<<endl;
    }
    return 0;
}
