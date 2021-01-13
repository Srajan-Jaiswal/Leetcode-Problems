// Runtime: 8 ms, faster than 88.24% of C++ online submissions for Largest Number.
// Memory Usage: 10.8 MB, less than 100.00% of C++ online submissions for Largest Number.

class Solution {
public:
    static int comp(int x,int y)
    {
        string a = to_string(x);
        string b = to_string(y);
        string ab = a.append(b);
        string ba = b.append(a);
        if(ab.compare(ba) > ba.compare(ab)){
            return 1;
        }
        else{
            return 0;
        }
    }
    
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),comp);
        string temp = "";
        if(nums[0]==0 && nums[nums.size()-1]==0){
            temp += '0';
            return temp;
        }
        for(int i=0;i<nums.size();i++)
           {
               temp += to_string(nums[i]);
           }
           return temp;
    }                       
                                 
};
