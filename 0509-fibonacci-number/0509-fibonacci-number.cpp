vector<long long> fibonacci = [] {
    vector<long long> v = {0, 1};
    while (true) {
        long long next_fib = v[v.size() - 1] + v[v.size() - 2];
        if (next_fib > 1000000000LL) {
            break;
        }
        v.push_back(next_fib);
    }
    return v;
}();

class Solution {
public:
    int fib(int n) { 
        return fibonacci[n]; 
    }
};