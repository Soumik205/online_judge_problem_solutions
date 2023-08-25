class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector < int > ans;
        k = k % nums.size();
        if (k < nums.size()) {
            int start = nums.size() - k;
            for (int i = start; i < nums.size(); i++) ans.push_back(nums[i]);
            for (int i = 0; i < start; i++) ans.push_back(nums[i]);

            nums.clear();
            for (int i = 0; i < ans.size(); i++) nums.push_back(ans[i]);
        }
    }
};
