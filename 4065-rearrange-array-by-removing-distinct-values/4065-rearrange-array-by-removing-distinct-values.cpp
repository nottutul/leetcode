class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> mp;
        vector<int> ans;

        for (int n : nums) {
            mp[n]++;
        }

        while (!mp.empty()) {
            vector<int> to_remove;
            for (auto it : mp) {
                if (mp[it.first] > 0) {
                    ans.push_back(it.first);
                    mp[it.first]--;
                }
                if(it.second == 0){
                    to_remove.push_back(it.first);
                }
            }
            for(int x: to_remove){
                mp.erase(x);
            }
        }

        return ans;
    }
};