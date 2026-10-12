class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int, char> shuffled;

        for (int i = 0; i < s.size(); i++) {
            shuffled[indices[i]] = s[i];
        }

        string res = "";

        for (auto e : shuffled) {
            res += e.second;
        }

        return res;
    }
};