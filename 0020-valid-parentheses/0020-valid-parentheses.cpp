class Solution {
public:
    bool isValid(string s) {
        stack<char> p;

        for (auto x : s) {
            if (x == '(' or x == '{' or x == '[') {
                p.push(x);
            }
            if (p.empty() and (x == ')' or x == '}' or x == ']')) {
                return false;
            }

            if (x == ')' and p.top() == '(') {
                p.pop();
            } else if (x == ')' and p.top() != '(') {
                return false;
            }

            if (x == '}' and p.top() == '{') {
                p.pop();
            } else if (x == '}' and p.top() != '{') {
                return false;
            }

            if (x == ']' and p.top() == '[') {
                p.pop();
            } else if (x == ']' and p.top() != '[') {
                return false;
            }
        }

        if (p.empty()) {
            return true;
        } else {
            return false;
        }
    }
};