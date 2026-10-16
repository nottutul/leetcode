const vector<int> ones = [] {
    vector<int> tmp;

    for (int i = 0; i < 100005; i++) {
        int sum = 0;
        int num = i;

        while (num != 0) {
            sum += num % 2;
            num /= 2;
        }
        tmp.push_back(sum);
    }
    return tmp;
}();

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> sub(ones.begin(), ones.begin() + n+1);
        return sub;
    }
};