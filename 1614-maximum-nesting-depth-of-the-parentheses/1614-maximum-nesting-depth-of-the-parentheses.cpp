class Solution {
public:
    int maxDepth(string s) {
        int l = s.size();
        stack<char> pt;
        int max_par = 0;

        for(int i=0; i<l; i++){
            if(s[i] == '('){
                pt.push(s[i]);
                if(pt.size() > max_par){
                    max_par = pt.size();
                }
            }
            if(s[i] == ')'){
                pt.pop();
            }
        }
        return max_par;
    }
};