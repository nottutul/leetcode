class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_map<char, int> kb;

        string s1 = "qwertyuiopQWERTYUIOP";
        for (char c : s1) {
            kb[c] = 1;
        }
        string s2 = "asdfghjklASDFGHJKL";
        for (char c : s2) {
            kb[c] = 2;
        }
        string s3 = "zxcvbnmZXCVBNM";
        for (char c : s3) {
            kb[c] = 3;
        }

        vector<string> v;

        for (int i = 0; i < words.size(); i++) {
            bool same = true;
            for (char c : words[i]) {
                if (kb[c] != kb[words[i][0]]) {
                    same = false;
                    break;
                }
            }
            if (same) {
                v.push_back(words[i]);
            }
        }
        return v;
    }
};