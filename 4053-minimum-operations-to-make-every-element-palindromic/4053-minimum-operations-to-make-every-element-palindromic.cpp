vector<long long int> pal[2];

int init = []() {
    long long int M = 1e9;
    for (long long int i = 1; i < 1e5; i++) {
        string str = to_string(i);
        string rev = str;
        reverse(rev.begin(), rev.end());

        long long int oddLen = stoll(str.substr(0, str.size() - 1) + rev);
        long long int evnLen = stoll(str + rev);

        if (oddLen < M) {
            pal[oddLen & 1].push_back(oddLen);
        }
        if (evnLen < M) {
            pal[evnLen & 1].push_back(evnLen);
        }
    }
    sort(pal[0].begin(), pal[0].end());
    sort(pal[1].begin(), pal[1].end());
    return 0;
}();

class Solution {
public:
    long long minOperations(vector<int>& nums) {
        long long int ans = 0;

        for (long long int num : nums) {
            vector<long long int>& p = pal[num & 1];
            int pos = lower_bound(p.begin(), p.end(), num) - p.begin();
            if (pos >= p.size()) {
                pos = p.size() - 1;
            }

            long long int rd = abs(num - p[pos]);
            long long int ld = pos > 0 ? abs(num - p[pos - 1]) : rd;

            ans = ans + min(ld, rd) / 2;
        }
        return ans;
    }
};