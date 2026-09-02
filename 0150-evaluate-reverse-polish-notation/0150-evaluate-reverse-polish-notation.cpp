class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int ans=0;
        s.push(stoi(tokens[0]));

        for(int i=1; i<tokens.size(); i++){
            if(tokens[i] == "+"){
                int tmp1=s.top();
                s.pop();
                int tmp2=s.top();
                s.pop();
                s.push(tmp1 + tmp2);
            }
            else if(tokens[i] == "-"){
                int tmp1=s.top();
                s.pop();
                int tmp2=s.top();
                s.pop();
                s.push(tmp2 - tmp1);
            }
            else if(tokens[i] == "*"){
                int tmp1=s.top();
                s.pop();
                int tmp2=s.top();
                s.pop();
                s.push(tmp2 * tmp1);
            }
            else if(tokens[i] == "/"){
                int tmp1=s.top();
                s.pop();
                int tmp2=s.top();
                s.pop();
                s.push(tmp2 / tmp1);
            }
            else{
                s.push(stoi(tokens[i]));
            }
        }

        ans = s.top();
        return ans;
    }
};