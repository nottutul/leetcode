class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i = left; i <= right; i++) {
            if (div(i)) {
                ans.push_back(i);
            }
        }
        return ans;
    }

    bool div(int n) {
        vector<int> digits;
        int num = n;
        int tmp;
        while (n > 0) {
            int digit = n % 10;
            n /= 10;

            if (digit == 0 || num % digit != 0) {
                return false;
            }
        }
        return true;
    }
};