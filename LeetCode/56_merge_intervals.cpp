class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector < vector <int> > ans;
        vector < int > temp;

        int start = intervals[0][0];
        int end = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= end) end = max(intervals[i][1], end);
            else {
                temp.push_back(start);
                temp.push_back(end);
                ans.push_back(temp);
                start = intervals[i][0];
                end = intervals[i][1];
                temp.clear();
            }
        }
        temp.push_back(start);
        temp.push_back(end);
        ans.push_back(temp);
        return ans;
    }
};
