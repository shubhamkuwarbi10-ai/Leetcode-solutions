# 1191. K-Concatenation Maximum Sum

### Difficulty: Medium

## Description
Given an integer array arr and an integer k, modify the array by repeating it k times.

For example, if arr = [1, 2] and k = 3 then the modified array will be [1, 2, 1, 2, 1, 2].

Return the maximum sub-array sum in the modified array. Note that the length of the sub-array can be 0 and its sum in that case is 0.

As the answer can be very large, return the answer modulo 109 + 7.

 
Example 1:


Input: arr = [1,2], k = 3
Output: 9


Example 2:


Input: arr = [1,-2,1], k = 5
Output: 2


Example 3:


Input: arr = [-1,-2], k = 7
Output: 0


 
Constraints:


	1 <= arr.length <= 105
	1 <= k <= 105
	-104 <= arr[i] <= 104

## Submission Details
- **Status**: Accepted
- **Runtime**: 0 ms
- **Memory**: 43332000
- **Language**: cpp

## Code
```cpp
class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        int n = arr.size();
        int mod = 1e9 +7 ;

        if (k == 1){
            long long curr_sum = arr[0];
            long long maxi = arr[0];

            for (int i = 1 ; i < n ;i++){
                curr_sum = max(curr_sum +arr[i] ,1LL*arr[i]);
                maxi = max(maxi ,curr_sum);
            }

            return max(0LL ,maxi) % mod;
        }

        long long sum = 0;

        for (int x : arr) sum += x;

        long long curr = arr[0];
        long long maxi = arr[0];
        long long best = maxi;
        for (int i = 1 ; i < 2*n ;i++){
            curr = max(1LL*arr[i % n] ,arr[i % n] + curr);
            maxi = max(curr ,maxi);
        }

        if (sum <= 0) return max(0LL ,maxi) % mod;

        return (maxi + 1LL*(k-2)*sum)%mod;
    }
};
```
