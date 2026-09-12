class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int ,vector<int>> mpp;

        for (int i = 0;i<n ;i++) mpp[nums[i]].push_back(i);

        int ans = 0;
        for (auto& [num ,pos] : mpp){
            if (pos.size() != 3) continue; 
            else if (pos[1] - pos[0] == pos[2] - pos[1]) {
                ans++;
            }
        }
        return ans;
    }
};