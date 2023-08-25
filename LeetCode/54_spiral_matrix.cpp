class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int visited[m + 10][n + 10];
        memset(visited, 0, sizeof visited);
        int t = m * n;
        vector < int > ans; 

        int i = 0, j = 0;

        while (t) {
            while (j < n && j >= 0 && visited[i][j] == 0) {
                ans.push_back(matrix[i][j]);
                visited[i][j] = 1;
                t--;
                j++;
            }
            j--;
            i++;
            while (i < m && i >= 0 && visited[i][j] == 0) {
                ans.push_back(matrix[i][j]);
                visited[i][j] = 1;
                t--;
                i++;
            }

            cout << i << " " << j << endl;
            i--;
            j--;

            while (j < n && j >= 0 && visited[i][j] == 0) {
                ans.push_back(matrix[i][j]);
                visited[i][j] = 1;
                t--;
                j--;
            }
            j++;
            i--;
            while (i < m && i >= 0 && visited[i][j] == 0) {
                ans.push_back(matrix[i][j]);
                visited[i][j] = 1;
                t--;
                i--;
            }
            i++;
            j++;
        }

        

        

        for (int k = 0; k < ans.size(); k++) cout << ans[k] << " ";
        cout << endl;

        return ans;
    }
};
