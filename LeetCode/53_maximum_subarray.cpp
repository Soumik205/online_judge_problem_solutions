class Solution {
public:
    int maxSubArray(vector<int>& nums) { //Kadane's Algo
        long long mx = 0;
        long long ans = -1000006; 

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) {
                if (mx > 0) mx += nums[i];
                else mx = nums[i];
            }
            else {
                if (mx < 0) mx = nums[i];
                else mx += nums[i];
            }
            ans = max(ans, mx);
        }
        return ans;
    }
};
