
class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    }
    vector<int> word_freq,que_freq;
    vector<int> ans;
    set<char> s;
    unordered_map<char,int> um;
    void func(vector<string> &vec,vector<int> &fr){
        string str = "";
        for(int i=0;i<vec.size();i++){
            str = vec[i];
            for(int j=0;j<str.length();j++){
                s.insert(str[j]);
            }
            auto it = s.begin();
            for(int k=0;k<str.length();k++){
                um[str[k]]++;
            }
           fr.push_back(um[*it]);
            um.clear();
            s.clear();
        }
    }
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        func(words,word_freq);
        func(queries,que_freq);
        sort(word_freq.begin(),word_freq.end());
        int cnt=0;
        int hel=0;
        for(int i=0;i<que_freq.size();i++){
            for(int j=0;j<word_freq.size();j++){
                if(que_freq[i] >= word_freq[j]){
                    cnt++;
                    continue;
                }
                hel = word_freq.size()-(cnt);
                break;
            }
            ans.push_back(hel);
            hel=0;
            cnt=0;
        }
        return ans;
    }
};
