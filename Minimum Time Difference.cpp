// Runtime: 12 ms, faster than 91.10% of C++ online submissions for Minimum Time Difference.
// Memory Usage: 13.8 MB, less than 46.40% of C++ online submissions for Minimum Time Difference.

class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    vector<int> v;
    int hrto_min(string str){
        string hr = str.substr(0,2);
        //cout<<hr<<endl;
        string m  = str.substr(3,5);
        //cout<<m<<endl;
        return stoi(hr)*60+stoi(m);
    }
    int findMinDifference(vector<string>& t) {
        for(int i=0;i<t.size();i++){
            string str = t[i];
            int num = hrto_min(str);
            v.push_back(num);
        }
        sort(v.begin(),v.end());
        v.push_back(v[0]);
        int ans = INT_MAX;
        for(int i=0;i<v.size()-1;i++){
                   int res = abs(v[i+1]-v[i]);
        ans = min(ans , min(60*24-res,res));
        }
        return ans;
    }
};
