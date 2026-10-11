class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();

        set<int> candy;
        for (int x : candyType) {
            candy.insert(x);
        }
        int m = candy.size();

        return min(n / 2, m);
    }
};