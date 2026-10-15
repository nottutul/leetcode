class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        vector<int> evens;

        for (int d : digits) {
            freq[d]++;
        }

        for (int i = 100; i <= 998; i = i + 2) {
            int d1 = i / 100;
            int d2 = (i / 10) % 10;
            int d3 = i % 10;

            freq[d1]--;
            freq[d2]--;
            freq[d3]--;

            if (freq[d1] >= 0 and freq[d2] >= 0 and freq[d3] >= 0) {
                int n = (d1 * 100) + (d2 * 10) + d3;
                evens.push_back(n);
            }

            freq[d1]++;
            freq[d2]++;
            freq[d3]++;
        }

        sort(evens.begin(), evens.end());
        return evens;
    }
};