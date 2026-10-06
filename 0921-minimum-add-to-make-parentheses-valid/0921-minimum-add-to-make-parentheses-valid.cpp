class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int c = 0;

        for (auto x : s) {
            if (x == '(') {
                st.push(x);
            }
            if (x == ')' and !st.empty()) {
                st.pop();
            } else if (x == ')' and st.empty()) {
                c++;
            }
        }
        return st.size() + c;
    }
};