class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map < int, int > mp;
        vector < int > ans;

        for (int i = 0; i < numbers.size(); i++) {
            if (mp.find(numbers[i]) == mp.end()) mp[numbers[i]] = i;

            int temp = target - numbers[i];

            if (mp.find(temp) != mp.end() && mp[temp] != i) {
                ans.push_back(mp[temp] + 1);
                ans.push_back(i + 1);
            }
        }
        return ans;
    }
};
