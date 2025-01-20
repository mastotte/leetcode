class Solution {
public:
    int jump(vector<int>& nums) {
        int maxReach = 0;
        int num_jumps = 0;
        vector<int>dp(nums.size(), 0);
        if(nums.size() == 1){
            return 0;
        }
        for(int i = 0; i < nums.size(); i++){
            if(i > maxReach) return false;
            maxReach = max(maxReach, i + nums[i]);
            for(int j = 1; j <= nums[i]; j++){
                if(i + j < nums.size() && dp[i + j] == 0){
                    dp[i + j] = dp[i] + 1;
                }
            }
            
        }
        return dp[nums.size()-1];
    }
};