class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;

        map<int, int> ck;

        for(int i=0; i<nums.size(); i++){
            ck[nums[i]]++;
        }

        int dup, mis;

        for(int i=1; i<nums.size()+1; i++){
            if(ck[i] == 2) dup = i;
            if(ck[i] == 0) mis = i;
        }

        ans.push_back(dup);
        ans.push_back(mis);

        return ans;
    }
};