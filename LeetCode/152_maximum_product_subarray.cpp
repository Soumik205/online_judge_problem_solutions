class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector < int > ans;
        vector < int > ans2;
        ans.push_back(nums[0]);
        int mx = nums[0];
        int temp;

        for (int i = 1; i < nums.size(); i++) {
            if (ans[i - 1] != 0) temp = ans[i - 1] * nums[i];
            else temp = nums[i];
            ans.push_back(temp);
            mx = max(mx, max(temp, nums[i]));
        }

        mx = max(mx, nums[nums.size() - 1]);
        ans2.push_back(nums[nums.size() - 1]);
        int k = 0;
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (ans2[k] != 0) temp = ans2[k] * nums[i];
            else temp = nums[i];
            ans2.push_back(temp);
            mx = max(mx, temp);
            k++;
        }
        // for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        // cout << endl;
        // for (int i = 0; i < ans2.size(); i++) cout << ans2[i] << " ";
        // cout << endl;

        cout << mx << endl;
        return mx;
    }
};
