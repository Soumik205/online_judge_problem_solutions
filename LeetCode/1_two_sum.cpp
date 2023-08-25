class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int ans1, ans2;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    ans1 = i;
                    ans2 = j;
                    break;
                }
            }
        }
        vector < int > ans;
        ans.push_back(ans1);
        ans.push_back(ans2);

        return ans;
    }
};
