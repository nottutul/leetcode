class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int, vector<int>> mp;
        int count=0;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }

        for(auto e: mp){
            if(e.second.size() == 1){
                count++;
            }
            else{
                int ck=0;
                for(int i=0; i<e.second.size()-1; i++){
                    if(e.second[i+1] - e.second[i] == 1) ck=1;
                    else{
                        ck=0;
                        break;
                    } 
                }
                if(ck == 1) count++;
            }

        }
        return count;
    }
};