class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1 , 0);

        if (n == 1 ) return nums[0];

        if (n == 2) return max(nums[1] ,nums[0]);

        dp[0] = 0; // maximum profit 0th house 
        dp[1] = nums[0]; // maximum profit till the first house 

        for (int i = 2 ;i<=n ;i++){
            dp[i] = max(dp[i-2] + nums[i-1] , dp[i-1]);
        }

        return dp[n];
    }
};