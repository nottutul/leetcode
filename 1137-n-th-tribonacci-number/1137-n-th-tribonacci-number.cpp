vector<long long> trib = [] {
    vector<long long> v = {0, 1, 1};
    while (true) {
        long long next_trib = v[v.size() - 1] + v[v.size() - 2] + v[v.size() - 3];
        if (next_trib > 10000000000LL) {
            break;
        }
        v.push_back(next_trib);
    }
    return v;
}();

class Solution {
public:
    int tribonacci(int n) { 
        return trib[n]; 
    }
};