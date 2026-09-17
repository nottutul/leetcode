class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else {
            long long int rev = 0;
            long long int org = x;
            while (x > 0) {
                int r = x % 10;
                rev = rev * 10 + r;
                x = x / 10;
            }
            if (org == rev)
                return true;
            else
                return false;
        }
    }
};