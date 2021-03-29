class Solution {
public:
void func(std::vector<int>& f, std::vector<int>& dcount, string s, int id) {
        int min_{INT32_MAX};
        for(const auto &c: s) min_ = std::min(min_, f[c]);
        for(const auto &c: s) f[c] -= min_;
        dcount[id] = min_;
    }
    string originalDigits(string& s) {
        std::vector<int> f(128, 0);
        for(const auto &c: s) ++f[c];
        std::vector<int> dcount(10, 0);
        func(f, dcount, "zero", 0);
        func(f, dcount, "two", 2);
        func(f, dcount, "six", 6);      
        func(f, dcount, "four", 4);     
        func(f, dcount, "one", 1);       
        func(f, dcount, "eight", 8);
        func(f, dcount, "seven", 7);
        func(f, dcount, "three", 3);      
        func(f, dcount, "five", 5);     
        func(f, dcount, "nine", 9);      
        
        string res{""};
        for(int i{0}; i <= 9; ++i)  res += std::string(dcount[i], (char)(i+'0'));
        return res;
    }
};
