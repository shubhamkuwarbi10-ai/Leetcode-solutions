class Solution {
public:
    void subset(int i ,vector<int>& nums ,vector<vector<int>>&ans ,vector<int>& arr ,int n){
        if (i == n){
            ans.push_back(arr);
            return ;
        }
        arr.push_back(nums[i]);
        subset(i+1 ,nums ,ans ,arr ,n);
        arr.pop_back();
        subset(i+1 ,nums ,ans ,arr ,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> arr;
        subset(0 ,nums ,ans ,arr ,n);
        // sort()
        return ans;
    }
};