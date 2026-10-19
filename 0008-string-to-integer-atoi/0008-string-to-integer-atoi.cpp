class Solution {
public:
    int myAtoi(string s) {
        long long int n = 0;
        int start = 0;
        int sign = 1;
        bool foundDigit = false;
        int signCk = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' and s[i] <= '9') {
                n = s[i] - '0';
                start = i;
                foundDigit = true;
                break;
            }
            if (s[i] == ' ') {
                if (signCk || foundDigit) {
                    break;
                }
                continue;
            }
            if (s[i] == '-') {
                sign = -1;
                signCk++;
            } else if (s[i] == '+') {
                sign = 1;
                signCk++;
            } else {
                break;
            }
        }

        if (!foundDigit) {
            return 0;
        }
        if (signCk > 1) {
            return 0;
        }

        for (int i = start + 1; i < s.size(); i++) {
            if (s[i] >= '0' and s[i] <= '9') {
                n = (n * 10) + (s[i] - '0');

                if (sign == 1 && n > INT_MAX) {
                    return INT_MAX;
                }
                if (sign == -1 && -n < INT_MIN) {
                    return INT_MIN;
                }
            } else {
                break;
            }
        }
        return n * sign;
    }
};