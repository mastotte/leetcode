class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> ans(n);
        int prod = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = prod;
            prod *= nums[i];
        }
        int revProd = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= revProd;
            revProd *= nums[i];
        }
        return ans;   
    }
};