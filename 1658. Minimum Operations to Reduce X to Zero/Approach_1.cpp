class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        // int minCount = 0;

        // if (nums[0] > x && nums[n-1] > x) return -1;
        
        int sum = 0;
        for (int i : nums)  sum += i;

        int rem_sum = sum - x;
        if (rem_sum < 0) return -1;
        if (rem_sum == 0) return n;

        int temp_sum = 0;
        int len = -1;
        int low = 0;
        for (int high = 0 ;high < n ; high++){
            temp_sum += nums[high];

            while (temp_sum > rem_sum) {
                temp_sum -= nums[low];
                low++;
            }
            if (temp_sum == rem_sum) len = max(len ,high - low + 1);
        }
        if (len == -1) return -1;
        return n - len;
    }
};