class Solution {
public:
    int vowelConsonantScore(string s) {
        int vow = 0, con = 0, score = 0;

        for (char c : s) {
            if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') {
                vow++;
            } else if (c > 'a' and c <= 'z') {
                con++;
            }
        }
        if (con > 0) {
            score = vow / con;
        }
        return score;
    }
};