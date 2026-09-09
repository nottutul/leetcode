class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);

        string word;
    
        vector<string> v;

        while(str >> word){
            v.push_back(word);
        }

        string t;

        int l = v.size()-1;

        if(l == 0){
            return v[0];
        }
        else{
            for(int i=l; i>0; i--){
                t = t+ v[i];
                t = t + " ";
            }
            t = t + v[0];

            return t;
        }

        

        
    }
};