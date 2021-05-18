class Solution {
public:
    unordered_set<int> st;
    int maxRepOpt1(string text) {
        int start=0,swap_cnt=0,cnt=0;
        int end = text.length()-1,maxi=0;
        while(start<end){
            if(text[start]==text[start+1]){
                st.insert(text[start]);
                cnt++;
                maxi = max(maxi,cnt);
                  //cout<<cnt<<endl;
                 cout<<"1"<<endl;
                //continue;
            }
            if(text[start]!=text[start+1] && st.size()<=1){
                cout<<"2"<<endl;
                if(swap_cnt==1){
                  maxi = max(maxi,cnt);
                  cnt=0;
                  swap_cnt=0;
                  st.clear();
                    start++;
                }
                else{ 
                while( text[end] != text[start] &&end>start+1){
                    end--;
                }
                if(text[start] == text[end]){
                    cout<<3<<endl;
                    swap(text[start+1],text[end]);
                    cout<<text[start+1]<<"->"<<text[end]<<endl;
                }
                end = text.length()-1;
                st.clear();
                st.insert(text[start]);
                swap_cnt++;
                continue;
                //start++;
            }
            }
            //cout<<"123"<<endl;
            start++;
            }
    return maxi+1;
    }
};
