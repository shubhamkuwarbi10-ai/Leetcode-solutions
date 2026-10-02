# 70. Climbing Stairs

### Difficulty: Easy

## Description
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 
Example 1:


Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps


Example 2:


Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step


 
Constraints:


	1 <= n <= 45

## Submission Details
- **Status**: Accepted
- **Runtime**: 0 ms
- **Memory**: 7864000
- **Language**: cpp

## Code
```cpp
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
```
