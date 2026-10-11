class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_map<char, string> mw;
        int k = 0;
        for (char c = 'a'; c <= 'z'; c++) {
            mw[c] = morse[k];
            k++;
        }

        unordered_map<string, int> trans;
        for(string s: words){
            string ms = "";
            for (int i = 0; i < s.size(); i++) {
                ms += mw[s[i]];
            }
            trans[ms]++;

        }
        return trans.size();
    }
};