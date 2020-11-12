//Runtime: 0 ms, faster than 100.00% of C++ online submissions for Unique Binary Search Trees.
//Memory Usage: 6.6 MB, less than 10.81% of C++ online submissions for Unique Binary Search Trees.
class Solution {
public:
    int cat[100001];
    int ans = 0;
    int count_catalan(int num)
    {
        cat[0]=cat[1]=1;
        for(int i=2;i<=num;i++)
        {
            cat[i]=0;
            for(int j=0;j<i;j++)
            {
         cat[i] += cat[j]*cat[i-j-1];
        }
        }
        return cat[num];
    }
    int numTrees(int n) {
        return count_catalan(n);
    }
}
