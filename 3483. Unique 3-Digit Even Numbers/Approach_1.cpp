class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        int count = 0;

        vector<int> freq(10 ,0);
        for (int d : digits) freq[d]++;

        for (int i = 1; i < 10 ; i++){
            
            if (freq[i] == 0) continue;

            vector<int> f(10 ,0);
            
            f[i]++;

            for (int j = 0 ; j < 10 ;j++){
                if (f[j] >= freq[j]) continue;
                f[j]++;
                

                for (int k = 0 ;k < 10 ;k++){
                    if (f[k] >= freq[k]) continue;
                    if (k % 2 == 0 ) count++;
                }
                
                
                f[j]--;
            }
        }

        return count;
    }
};