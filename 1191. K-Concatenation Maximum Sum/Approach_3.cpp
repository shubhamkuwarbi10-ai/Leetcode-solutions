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