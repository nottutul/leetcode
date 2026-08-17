class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = nums.size();
        int cnt=0;

        for(int i=0; i<l; i++){
            if(nums[i] == val){
                nums[i] = 200;
                cnt++;
            }
        }

        sort(nums.begin(), nums.end());

        int k = l-cnt;

        for(int i=0; i<cnt; i++){
            nums.pop_back();
        }

        return k;
    }
};