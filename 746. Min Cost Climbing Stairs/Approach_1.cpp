class Solution {
public:
    int solve(vector<int>& cost ,int n ,vector<int>& dp){
        if (n >= cost.size()) return 0;

        if (dp[n] != -1) return dp[n];

        return dp[n] = min(solve(cost, n+1 ,dp) , solve(cost , n+2 ,dp) ) + cost[n];

    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size() + 1,-1);
        int stair0 = solve(cost , 0  ,dp);
        int stair1 = solve(cost , 1 ,dp);
        return min(stair1 , stair0);
    }
};