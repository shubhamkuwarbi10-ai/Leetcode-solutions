class Solution {
public:
    int dp[101] ;
    int steal(vector<int>& nums ,int i ,int n){
        if (i > n) return 0;

        if (dp[i] != -1) return dp[i];

        return dp[i] = max(steal(nums, i+1 ,n ) , steal(nums ,i+2 ,n) + nums[i]); 
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        // vector<int> dp(n+1 ,-1);
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0] ,nums[1]);

        memset(dp ,-1 ,sizeof(dp));
        int case1 = steal(nums ,0 ,n - 2 );

        memset(dp ,-1 ,sizeof(dp));
        int case2 = steal(nums ,1 ,n - 1 );

        return max(case1 ,case2);
    }
};