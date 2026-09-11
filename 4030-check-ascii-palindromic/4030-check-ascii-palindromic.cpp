class Solution {
public:
    bool isStringPalindrome(string str) {
        int left = 0;
        int right = str.length() - 1;

        while (left < right) {
            if (str[left] != str[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    bool isPalindromic(string s) {
        int l = s.size();
        string pal = "";

        for (int i = 0; i < l; i++) {
            bitset<8> bin(s[i]);
            string tmp = bin.to_string();
            pal = pal + tmp;
        }

        return isStringPalindrome(pal);
    }
};