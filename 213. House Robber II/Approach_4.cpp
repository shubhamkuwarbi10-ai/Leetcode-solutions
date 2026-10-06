class Solution {
public:
    int dp[101] ;
    int solve(vector<int>& nums ,int i ,int n){
        if (i > n) return 0;

        if (dp[i] != -1) return dp[i];

        return dp[i] = max(solve(nums ,i+2 ,n) + nums[i] ,solve(nums ,i+1 ,n));
    }
    int rob(vector<int>& nums) {
        int n = nums.size();

        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0] ,nums[1]);

        memset(dp ,0 ,sizeof(dp));
        dp[0] = 0;
        for (int i = 1; i<= n-1 ;i++)
            dp[i] = max(nums[i-1] + ((i-2 >= 0) ? dp[i-2] : 0) ,dp[i-1]);
        int index_0 = dp[n-1];

        memset(dp ,0 ,sizeof(dp));
        dp[0] = 0;
        dp[1] = 0;
        for (int i = 2; i<= n ;i++)
            dp[i] = max(nums[i-1] + ((i-2 >= 0) ? dp[i-2] : 0) ,dp[i-1]);
        int index_1 = dp[n];

        return max(index_0 ,index_1);
    }
};