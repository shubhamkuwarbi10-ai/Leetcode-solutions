class Solution {
public:
    int money(vector<int>& nums ,int n ,vector<int>& dp){
        if (n >= nums.size()) return 0;

        if (dp[n] != -1) return dp[n];

        return dp[n] = max(money(nums, n+2 ,dp) + nums[n] ,money(nums ,n+1 ,dp));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1 ,-1);
        dp[n] = money(nums, 0 ,dp);
        return dp[n];
    }
};