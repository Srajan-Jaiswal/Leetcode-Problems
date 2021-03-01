// Runtime: 1112 ms, faster than 5.77% of C++ online submissions for Search Suggestions System.
// Memory Usage: 346 MB, less than 10.66% of C++ online submissions for Search Suggestions System.

class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    }
    /*
    set<string> s;
    vector<vector<string>> ans;
    void func(string str){
        //cout<<str<<endl;
        vector<string> mini;
        mini.clear();
        for(auto it: s){
            string temp = it;
            for(int i=0;i<str.length();i++){
                if(str[i] == temp[i]){
                    if(i==str.length()-1) mini.push_back(temp);
                    continue;
                }
                else break;
            }
            if(mini.size()>=3) break;
        }
        ans.push_back(mini);
    }
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        for(string str : products) s.insert(str);
        string res="";
        for(int i=0;i<searchWord.length();i++){
            res+=searchWord[i];
            func(res);
        }
        return ans;
    */
    
    vector<string> func(vector<string>& mini, string str) {
        auto it1 = lower_bound(mini.begin(),mini.end(),str);
        str[str.size()-1]++;
        auto it2 = lower_bound(mini.begin(),mini.end(),str);
        if(it2-it1 > 3) it2 = it1+3;
        return vector<string>(it1,it2);
    }
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        string res = "";
        vector<vector<string>> ans;
        sort(products.begin(),products.end());
        for(int i=0;i<searchWord.length();i++){
            res+=searchWord[i];
        ans.push_back(func(products,res));
        }
        return ans;
    }
};
