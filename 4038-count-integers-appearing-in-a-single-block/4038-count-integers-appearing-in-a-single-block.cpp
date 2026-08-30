class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }

        for (auto e : mp) {
            bool special = true;

            for (int i = 0; i < e.second.size() - 1; i++) {
                if (e.second[i + 1] - e.second[i] != 1) {
                    special = false;
                    break;
                }
            }

            if (special)
                count++;
        }

        return count;
    }
};