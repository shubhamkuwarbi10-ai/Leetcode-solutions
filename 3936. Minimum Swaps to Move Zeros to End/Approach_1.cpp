class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size(); 
        int zeros = 0;
        int count = 0 ;
        for (int i : nums){
            if (i == 0) zeros++;
        }

        int i = 0 , j = n-1;
        while (i < n - zeros && j >= n - zeros){
            if (nums[j] == 0) {
                j--;
                continue;
            }
            if (nums[i] == 0) {
                swap(nums[i] ,nums[j]);
                count++;
                j--;
            }
            else i++;
        }

        return count;
    }
};