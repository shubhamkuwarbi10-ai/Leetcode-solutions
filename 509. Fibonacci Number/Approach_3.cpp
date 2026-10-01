class Solution {
public:
    // int solve(int n , vector<int>& dp){
    //     if ( n == 1 || n == 0) return n;

    //     if (dp[n] != -1) return dp[n];

    //     return dp[n] = solve(n-1 ,dp) + solve(n-2 ,dp);
    // }
    int fib(int n) {
        if (n <= 1) return n;
        // vector<int>dp(n+1, -1);
        int prev1 = 0 , prev2 = 1;
        for (int i = 2 ; i <= n ;i++){
            int curr = prev1 + prev2;
            prev1 = prev2;
            prev2 = curr;
        }

        return prev2;
    }
};