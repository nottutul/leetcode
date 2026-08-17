class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int x = strs.size();
        int y=300;
        
        for(int i=0; i<x; i++){
            int m = strs[i].size();
            y = min(y,m);
        }

        int sml;

        for(int i=0; i<x; i++){
            if(strs[i].size() == y){
                sml = i;
            }
        }

        int i,j,ck;
        string ans="";

        for(i=0; i<y; i++){
            ck=0;
            for(j=0; j<x; j++){
                if(sml != j){
                    if(strs[sml][i] == strs[j][i]){
                        continue;
                    }
                    else{
                        ck=1;
                        break;
                    }
                }
            }
            if(ck==0){
                ans+= strs[sml][i];
            }
            else{
                break;
            }
        }


        return ans;


    }
};