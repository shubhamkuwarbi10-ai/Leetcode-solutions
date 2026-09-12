class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int ,vector<int>> mpp;

        for (int i = 0; i<n ;i++) mpp[nums[i]].push_back(i);

        for (auto& [num ,pos] : mpp){
            set<int> dist;
            if (pos.size() < 3) continue;
            for (int i = pos.size() - 1; i > 0 ;i--){
                dist.insert(pos[i] - pos[i-1]);
            }

            if (dist.size() == 1) ans++;
        }

        return ans;
    }
};