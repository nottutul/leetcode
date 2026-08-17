class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        int l = digits.size();
        if(digits[l-1] >=0 && digits[l-1] <=8){
            digits[l-1] = digits[l-1] + 1;
            return digits;
        }

        int nine = 0; 
        for(int i=l-1; i>=0; i--){
            if(digits[i] == 9){
                nine++;
            }
            else{
                break;
            }
        }

        if(nine == l){
            vector<int> v1;
            vector<int> v2(l);
            v1.push_back(1);
            v1.insert(v1.end(), v2.begin(), v2.end());

            return v1;
        }

        else{
            digits[l-nine-1] += 1;

            for(int i=l-nine; i<l; i++){
                digits[i] = 0;
            }

            return digits;
        }


        
        
    }
};