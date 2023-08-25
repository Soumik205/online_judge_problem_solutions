class Solution {
public:
    int longestPalindrome(string s) {
        vector < int > arr (128, 0);

        for (int i = 0; i < s.size(); i++) arr[s[i] - 'A']++;

        int count = 0;
        for (int i = 0; i < arr.size(); i++) {
            count += arr[i] / 2 * 2;
            if (count % 2 == 0 && arr[i] % 2 == 1) count++;
        }
        return count;
    }
};
