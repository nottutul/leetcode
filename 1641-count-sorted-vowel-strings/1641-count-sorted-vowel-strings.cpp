const vector<int> v = []() {
    int n = 50;
    vector<int> tmp(n + 1);
    vector<int> f = {1, 1, 1, 1, 1};

    for (int i = 1; i <= n; ++i) {
        int sum = 0;
        for (int x : f) {
            sum += x;
        }
        tmp[i] = sum;

        int s = 0;
        for (int j = 0; j < 5; ++j) {
            s += f[j];
            f[j] = s;
        }
    }

    return tmp;
}();

class Solution {
public:
    int countVowelStrings(int n) {
        // all computed
        return v[n];
    }
};