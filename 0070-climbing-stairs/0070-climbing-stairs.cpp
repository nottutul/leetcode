class Solution {
public:
    int climbStairs(int n) {
        long long int pre1 = 0, pre2 = 1;
        vector<int> fib;

        for(int i=0; i<=45; i++){
            fib.push_back(pre1 + pre2);
            pre1 = pre2;
            pre2 = fib[i];
        }

        return fib[n-1];
    }
};