class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int start = 0;
        int end = size - 1;
        long long ans = 0;

        while (start < end) {
            long long temp = min(height[start], height[end]);
            temp *= (end - start);
            ans = max(ans, temp);

            if (height[start] <= height[end]) start++;
            else end--;
        }
        cout << ans << endl;
        return ans;
    }
};
