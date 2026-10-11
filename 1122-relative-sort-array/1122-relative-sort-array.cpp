class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> result;

        for (int a2 : arr2) {
            for (int i = 0; i < arr1.size(); i++) {
                if (a2 == arr1[i]) {
                    result.push_back(arr1[i]);
                    arr1[i] = -1;
                }
            }
        }

        sort(arr1.begin(), arr1.end());

        for (int a1 : arr1) {
            if (a1 != -1) {
                result.push_back(a1);
            }
        }

        return result;
    }
};