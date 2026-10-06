class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();

        for(auto n:nums){
            mp[n]++;
        }

        for(auto e: mp){
            if(e.second > 1){
                return true;
            }
        }
        return false;
    }
};