class Solution {
public:
    int lengthOfLastWord(string s) {
        string w;
        stringstream words(s);

        while(words >> w);
        return w.size();
    }
};