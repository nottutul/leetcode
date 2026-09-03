class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n);

        int startTime = 0;
        stack<int> call;

        for(int i=0; i<logs.size(); i++){
            stringstream ss(logs[i]);

            string ids, type, times;
            getline(ss, ids, ':');
            getline(ss, type, ':');
            getline(ss, times, ':');

            int id = stoi(ids);
            int time = stoi(times);

            if(type == "start"){
                if(call.size()){
                    ans[call.top()] += time - startTime;
                }
                call.push(id);
                startTime = time;
            }
            else{
                ans[call.top()] += time - startTime + 1;
                call.pop();
                startTime = time + 1;
            } 

        }
        return ans;

    }
};