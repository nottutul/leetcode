class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char, int> mps, mpt;

        for (int i = 0; i < s.size(); i++) {
            mps[s[i]] = i;
            mpt[t[i]] = i;
        }

        int pd = 0;
        for (char c : s) {
            pd += abs(mps[c] - mpt[c]);
        }
        return pd;
    }
};