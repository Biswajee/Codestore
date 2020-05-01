// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int last_bad;
    int go(int l, int r) {
        if(l<=r) {
            int mid = ceil(l+(r-l)/2);
            if(isBadVersion(mid)) {
                last_bad = mid;
                return go(1, mid-1);
            } else return go(mid+1, r);
        }
        return last_bad;
    }
    int firstBadVersion(int n) {
        return go(1, n);
    }
};