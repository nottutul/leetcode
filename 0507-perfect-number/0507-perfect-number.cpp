class Solution {
public:
    bool checkPerfectNumber(int num) {
        unordered_map<long long int, int> pn{
            {6, 1}, 
            {28, 1}, 
            {496, 1}, 
            {8128, 1}, 
            {33550336, 1}
        };

        return pn[num] == 1;
    }
};