class Solution {
public:
    int minDeletions(vector<int>& nums) {
        // stack<int> st;
        // sort(nums.begin() ,nums.end());
        int count = 0;
        int n = nums.size();

        for(int i = 1 ; i < n ;i++ ){
            if (nums[i] == nums[i-1]) count++;
            
        }

        return count;
    }
};