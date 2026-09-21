class Solution {
public:
    int reverseDegree(string s) {
        string al = "abcdefghijklmnopqrstuvwxyz";

        unordered_map<char, int> mp;

        int i = 26;
        for (char x : al) {
            mp[x] = i;
            i--;
        }

        int pos = 1;
        int rd = 0;
        for (char x : s) {
            rd += pos * mp[x];
            pos++;
        }

        return rd;
    }
};