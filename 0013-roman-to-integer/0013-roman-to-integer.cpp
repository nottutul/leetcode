class Solution {
public:
    int romanToInt(string s) {
        int l = s.size();
        s += "A";
        map<char, int> m;
        int sum=0;

        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        for(int i=0; i<l; i++){
            if(s[i] == 'I' && s[i+1] == 'V'){
                sum += 4;
                i++;
            }
            else if(s[i] == 'I' && s[i+1] == 'X'){
                sum += 9;
                i++;
            }
            else if(s[i] == 'X' && s[i+1] == 'L'){
                sum += 40;
                i++;
            }
            else if(s[i] == 'X' && s[i+1] == 'C'){
                sum += 90;
                i++;
            }
            else if(s[i] == 'C' && s[i+1] == 'D'){
                sum += 400;
                i++;
            }
            else if(s[i] == 'C' && s[i+1] == 'M'){
                sum += 900;
                i++;
            }

            else{
                sum += m[s[i]];
            }
        }
        return sum;
    }
};