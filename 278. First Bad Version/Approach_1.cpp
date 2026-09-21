// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int bad = INT_MAX;
        int low = 1 , high = n;
        while (low <= high){
            int mid = low + (high - low)/2;
            
            if (isBadVersion(mid)){
                bad = min(bad ,mid);
                high = mid-1;
            }

            else if (!isBadVersion(mid)) low = mid+1;
            
        }
        return bad;
    }
};