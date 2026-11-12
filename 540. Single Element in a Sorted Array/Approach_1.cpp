class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        int xorValue = 0;

        for (int i : nums){
            xorValue ^= i;
        }

        return xorValue;
    }
};