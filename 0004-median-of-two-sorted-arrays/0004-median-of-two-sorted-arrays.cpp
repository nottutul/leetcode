class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>& small = nums1.size() > nums2.size() ? nums2 : nums1;
        vector<int>& large = nums1.size() > nums2.size() ? nums1 : nums2;

        int low = 0, high = small.size();
        int full = nums1.size() + nums2.size();

        while(low <= high){
            int partx = (high+low)/2;
            int party = (full+1)/2 - partx; 

            int l1 = partx == 0 ? INT_MIN : small[partx-1];
            int r1 = partx == small.size() ? INT_MAX : small[partx];

            int l2 = party == 0 ? INT_MIN : large[party-1];
            int r2 = party == large.size() ? INT_MAX : large[party];

            if(l1 <= r2 && l2 <= r1){
                if(full %2 == 0){
                    return (max(l1,l2)+min(r1,r2))/2.0;
                }
                else{
                    return max(l1,l2);
                }
            }

            if(l1 > r2){
                high = partx-1;
            }
            else{
                low = partx+1;
            }


        }
        return 0;
    }
};