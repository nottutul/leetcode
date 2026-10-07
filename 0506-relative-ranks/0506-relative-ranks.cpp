class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int, string> mp;
        vector<string> rank;
        vector<int> tmp = score;

        sort(tmp.rbegin(), tmp.rend());

        for (int i = 0; i < score.size(); i++) {
            if (i == 0) {
                mp[tmp[0]] = "Gold Medal";
            } else if (i == 1) {
                mp[tmp[1]] = "Silver Medal";
            } else if (i == 2) {
                mp[tmp[2]] = "Bronze Medal";
            } else {
                mp[tmp[i]] = to_string(i+1);
            }
        }
        for (int i = 0; i < score.size(); i++) {
            rank.push_back(mp[score[i]]);
        }

        return rank;
    }
};