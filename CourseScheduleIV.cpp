class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<bool> answer(queries.size(), false);
        vector<vector<int>> graph(numCourses);
        unordered_map<int, unordered_set<int>> reachable;

        // Build reachability chains
        for(auto& pre_req : prerequisites){
            reachable[pre_req[1]].insert(pre_req[0]);
        }

        // Propagate reachability
        for(int i = 0; i < numCourses; i++){
            for(int j = 0; j < numCourses; j++){
                if(reachable[j].count(i)){
                    reachable[j].insert(reachable[i].begin(), reachable[i].end());
                }
            }
        }
        int counter = 0;
        for(auto& query : queries){
            int start = query[1];
            int end = query[0];
            answer[counter] = (reachable[start].count(end) > 0);
            counter++;
        }

        return answer;
    }
};