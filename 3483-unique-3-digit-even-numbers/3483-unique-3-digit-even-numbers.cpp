class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        int count = 0;

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
                count++;
            }

            freq[d1]++;
            freq[d2]++;
            freq[d3]++;
        }
        return count;
    }
};