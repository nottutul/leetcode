bool checkPal(string& str, int left, int right) {
    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

class Solution {
public:
    string longestPalindrome(string s) {
        int l = s.size();
        int maxLen = 0;
        int start = 0;

        for (int i = 0; i < l; i++) {
            for (int j = i; j < l; j++) {
                int len = j - i + 1;

                if (len > maxLen and checkPal(s, i, j)) {
                    maxLen = len;
                    start = i;
                }
            }
        }
        
        return s.substr(start, maxLen);
    }
};