class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};

        vector<string> key = {"",    "",    "abc",  "def", "ghi",
                              "jkl", "mno", "pqrs", "tuv", "wxyz"};

        vector<string> ans = {""};

        for (char digit : digits) {
            vector<string> temp;
            string letters = key[digit - '0'];

            for (string existing : ans) {
                for (char letter : letters) {
                    temp.push_back(existing + letter);
                }
            }

            ans = temp;
        }

        return ans;
    }
};