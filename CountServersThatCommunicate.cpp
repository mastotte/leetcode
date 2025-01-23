class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int> cpus_in_col(grid[0].size());
        vector<int> cpus_in_row(grid.size());
        int cpus = 0;
        int cpus_with_no_communications = 0;

        cout << grid.size() << endl;
        cout << grid[0].size() << endl;
        for (int row = 0; row < grid.size(); row++){
            for (int col = 0; col < grid[0].size(); col++){
                if(grid[row][col] == 1){
                    cpus_in_col[col] += 1;
                    cpus_in_row[row] += 1;
                }
            }   
        }
        for (int row = 0; row < grid.size(); row++){
            for (int col = 0; col < grid[0].size(); col++){
                if(grid[row][col] == 1){
                    if(cpus_in_col[col] <= 1 && cpus_in_row[row] <= 1){
                        cpus_with_no_communications++;
                    }
                }
            }
        }
        for(int i = 0; i < cpus_in_col.size(); i++){
            cpus += cpus_in_col[i];  
        }

        return cpus - cpus_with_no_communications;
    }
};