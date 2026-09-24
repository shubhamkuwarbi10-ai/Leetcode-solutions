class Solution {
public:
    int sum(int n){
        int sum = 0;
        while (n > 0){
            sum += n%10;
            n = n/10;
        }
        return sum;
    }

    int smallestIndex(vector<int>& nums) {
        bool found = false;
        int res = INT_MAX;
        for (int i = 0 ;i<nums.size() ;i++){
            if (sum(nums[i]) == i){
                found = true;
                res = i;
                break;
            }
        }
        return found ? res : -1; 
    }
};