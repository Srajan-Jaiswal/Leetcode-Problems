// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reorganize String.
// Memory Usage: 6.3 MB, less than 92.36% of C++ online submissions for Reorganize String.

class Solution {
public:
    priority_queue<pair<int,char>> max_heap;
    string str;
    string reorganizeString(string S) {
         vector<int> alpha(26,0);
        for(int i=0;i<S.length();i++)
        {
          alpha[S[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {   if(alpha[i]>0){
            max_heap.push(make_pair(alpha[i],i+'a'));
        }
        }
        while(max_heap.size()>=2)
        {
           pair<int,char> a = max_heap.top();
            max_heap.pop();
           pair<int,char> b = max_heap.top();
            max_heap.pop();
            str += a.second;
            str += b.second;
             a.first-=1;
             b.first-=1;
            if(a.first>0){
                max_heap.push(make_pair(a.first,a.second));
            }
            if(b.first>0){
                max_heap.push(make_pair(b.first,b.second));
            }
        }
        if(max_heap.size()==1){
            pair<int,char> p= max_heap.top();
            if(p.first>1){
                return "";
            }
            str+= p.second;
        }
        return str;
    }
};
