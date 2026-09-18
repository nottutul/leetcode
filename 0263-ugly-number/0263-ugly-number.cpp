class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) {
            return false;
        }

        vector<int> ans;

        while (n % 2 == 0) {
            ans.push_back(2);
            n = n / 2;
        }

        for (long long int i = 3; i * i <= n; i = i + 2) {
            while (n % i == 0) {
                ans.push_back(i);
                n = n / i;
            }
        }

        if (n > 2) {
            ans.push_back(n);
        }

        bool ugly = true;
        for (int x : ans) {
            if (x == 2 || x == 3 || x == 5) {
                ugly = true;

            } else {
                ugly = false;
                break;
            }
        }
        return ugly;
    }
};