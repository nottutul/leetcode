class Solution {
public:
    char findTheDifference(string s, string t) {
        char missing = 0;

        for (char c : s) {
            missing ^= c;
        }
        for (char c : t) {
            missing ^= c;
        }
        return missing;
    }
};