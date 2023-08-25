class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector < vector < int > > ans;
        vector < int > temp;

        sort(nums.begin(), nums.end());

        do {
            for (int i = 0; i < nums.size(); i++) {
                temp.push_back(nums[i]);
                cout << nums[i] << " ";
            }
            ans.push_back(temp);
            temp.clear();
            cout << endl;
        } while (next_permutation(nums.begin(), nums.end()));

        return ans;
    }
    // Note: next_permutation always works in a sorted array
};
