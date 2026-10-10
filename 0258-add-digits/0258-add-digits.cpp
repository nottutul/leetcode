class Solution {
public:
    int addDigits(int num) {
        long long sum = 0;

        while (1) {
            while (num > 0) {
                int d = num % 10;
                num /= 10;
                sum += d;
            }
            if (sum < 10) {
                break;
            }
            num = sum;
            sum = 0;
        }
        return sum;
    }
};