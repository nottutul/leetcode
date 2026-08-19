class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);

        if(x<0){
            std::reverse(s.begin()+1, s.end());
        }
        else{
            std::reverse(s.begin(), s.end());
        }

        long long int num = 0;

        int start = (x < 0) ? 1 : 0;

        for (int i = start; i < s.size(); i++) {
            num = num * 10 + (s[i] - '0');
        }

        if (x < 0){
            num = -num;
        }
            

        if (num < INT_MIN || num > INT_MAX){
            return 0;
        }
            

        return num;

        
        

    
    }
};






