class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string, string> dict;
        for (auto& item : knowledge) {
            dict[item[0]] = item[1];
        }

        string result = "";
        string key = "";
        bool inside = false;

        for (auto ch : s) {
            if (ch == '(') {
                inside = true;
                key.clear();
            } else if (ch == ')') {
                inside = false;
                auto it = dict.find(key);
                if (it != dict.end()) {
                    result += it->second;

                } else {
                    result += '?';
                }
            } else {
                if (inside) {
                    key += ch;
                } else {
                    result += ch;
                }
            }
        }
        return result;
    }
};