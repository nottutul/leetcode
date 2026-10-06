class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> par;
        int c = 0;

        for (auto x : s) {
            if (x == '(') {
                par.push(x);
            }
            if (x == ')' and !par.empty()) {
                par.pop();
            } else if (x == ')' and par.empty()) {
                c++;
            }
        }
        return par.size() + c;
    }
};