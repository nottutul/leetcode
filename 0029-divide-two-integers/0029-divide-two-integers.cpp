class Solution {
public:
    int divide(int dividend, int divisor) {
        long long int quo = 0;

        if (dividend == 0) {
            return 0;
        }

        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        if (dividend == INT_MAX && divisor == -1) {
            return INT_MIN + 1;
        }

        int sign = 0;
        if (dividend < 0) {
            sign++;
        }
        if (divisor < 0) {
            sign++;
        }

        long long absDividend = abs((long long)dividend);
        long long absDivisor = abs((long long)divisor);

        while (absDividend >= absDivisor) {
            long long temp = absDivisor, multiple = 1;

            while (absDividend >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }

            absDividend -= temp;
            quo += multiple;
        }

        if (sign == 0 or sign == 2) {
            if (quo > INT_MAX) {
                return INT_MAX;
            }
            return quo;
        } else {
            if (quo < INT_MIN) {
                return INT_MIN;
            }
            return -quo;
        }
    }
};