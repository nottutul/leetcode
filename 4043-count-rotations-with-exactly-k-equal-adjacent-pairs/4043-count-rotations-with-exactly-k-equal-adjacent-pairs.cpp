class Solution {
public:
    int countRotations(string s, int k) {
        int l=s.size();
        int count=0;

        for(int i=0; i<l; i++){
            int cc=0;

            for(int j=0; j<l-1; j++){
                if(s[j] == s[j+1]){
                    cc++;
                }
            }
            if(cc == k){
                count++;
            }
            
            rotate(s.begin(), s.begin() + 1, s.end());
        }

        return count;
        
    }
};