# 78. Subsets

### Difficulty: Medium

## Description
Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 
Example 1:


Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]


Example 2:


Input: nums = [0]
Output: [[],[0]]


 
Constraints:


	1 <= nums.length <= 10
	-10 <= nums[i] <= 10
	All the numbers of nums are unique.

## Submission Details
- **Status**: Accepted
- **Runtime**: 0 ms
- **Memory**: 10016000
- **Language**: cpp

## Code
```cpp
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();

        for (int i = 0 ;i<pow(2 , n) ;i++){
            vector<int> temp;
            for (int j = 0 ;j<n ;j++){
                if ((i & (1 << j))) temp.push_back(nums[j]);
            }
            res.push_back(temp);
        }

        return res;
    }
};
```
