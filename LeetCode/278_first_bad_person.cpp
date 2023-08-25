// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long low = 1, high = n, mid;

        while (low <= high) {
            mid = (low + high) / 2.0;
            if (isBadVersion(mid)) {
                if (mid > 0 && isBadVersion(mid - 1)) high = mid - 1;
                else break;
            }
            else if (!isBadVersion(mid)) {
                if (mid < n) low = mid + 1;
            }
        }
        return mid;
    }
};
