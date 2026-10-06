class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        vector<int> seen(1005, 0);
        for (auto n1 : nums1) {
            for (auto n2 : nums2) {
                if (n1 == n2 and seen[n1] == 0) {
                    v.push_back(n1);
                    seen[n1]++;
                }
            }
        }
        return v;
    }
};