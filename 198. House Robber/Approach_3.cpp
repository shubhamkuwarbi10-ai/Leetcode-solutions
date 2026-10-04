class Solution {
public:
    int money(vector<int>& nums ,int n ,vector<int>& dp){
        if (n >= nums.size()) return 0;

        if (dp[n] != -1) return dp[n];

        // either take the current and move to the +2 house or take the adjacent house and leave the current house 
        return dp[n] = max(money(nums, n+2 ,dp) + nums[n] ,money(nums ,n+1 ,dp));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1 ,-1);
        dp[n] = money(nums, 0 ,dp);
        return dp[n];
    }
};