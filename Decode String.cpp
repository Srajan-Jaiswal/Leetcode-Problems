// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Decode String.
// Memory Usage: 7.1 MB, less than 15.17% of C++ online submissions for Decode String.

class Solution {
public:
        string decodeString(string s) {
		//have added comments to make the code self explanatory
        int n = s.length();
        string ans = "";
        
        stack<int> stk1;      
        stack<string> stk2;  //string that created till  now
     
        int i = 0;
        while(i < n) {
            if(s[i] == '[') {
                stk2.push(ans);
                ans = "";
                i++;
            } 
            else if(s[i] == ']') {
                stk2.push(ans);
                ans = "";
                int times = stk1.top();
                stk1.pop();
                string tempstr = stk2.top();
                stk2.pop();
                for(int k = 0; k < times; k++) {
                    ans += tempstr;
                }
                if(!stk2.empty()) {
                    ans = stk2.top() + ans;
                    stk2.pop();    
                }
                i++;
            } 
            else if(s[i] - 'a' >= 0) {
                ans += s[i];
                i++;
            }
            else {
                string count = "";
                while(s[i] - 'a' <= -40){
                    count += s[i];          // if the number is greater that  10 
                    i++;
                }
                int temp = stoi(count);        
                stk1.push(temp);
            }
        }
        return ans;
    }
};
