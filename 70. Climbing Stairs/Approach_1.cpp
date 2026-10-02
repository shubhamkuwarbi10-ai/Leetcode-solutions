class Solution {
public:
    int solve(int n ,vector<int>& dp){
        if (n < 0) return 0;
        if (n == 0) return 1;

        if (dp[n] != -1) return dp[n];
        return dp[n] = solve(n-1 ,dp) + solve(n-2 ,dp);
    }
    int climbStairs(int n) {
        // vector<int> dp(n+1 ,-1);
        // return dp[n] = solve(n ,dp);

        // bottom up approach

        if (n == 1 || n == 2) return n;
        int prev1 = 1 , prev2 = 2;
        for (int i = 3 ; i<= n ; i++){
            int curr = prev1 + prev2;
            prev1 = prev2;
            prev2 = curr;
        }

        return prev2;
    }
};