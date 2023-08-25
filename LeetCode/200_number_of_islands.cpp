class Solution {
public:
    void bfs (int srcx, int srcy, vector<vector<char>>& grid, vector<vector<int>>& visited, int m, int n) {
        queue < pair < int, int >> Q;
        Q.push(make_pair(srcx, srcy));
        visited[srcx][srcy] = true;

        int dx[] = {1, 0, -1, 0};
        int dy[] = {0, -1, 0, 1};

        while (!Q.empty()) {
            pair < int , int > v = Q.front();
            Q.pop();
            int x = v.first;
            int y = v.second;

            for (int i = 0; i < 4; i++) {
                int tempx = x + dx[i];
                int tempy = y + dy[i];

                if (tempx >= 0 && tempx < m && tempy >=0 && tempy < n) {
                    if (!visited[tempx][tempy] && grid[tempx][tempy] == '1') {
                        visited[tempx][tempy] = true;
                        Q.push(make_pair(tempx, tempy));
                    }
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        vector<vector<int>> visited(m, vector<int>(n, 0));
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!visited[i][j] && grid[i][j] == '1') {
                    ans++;
                    bfs(i, j, grid, visited, m, n);
                }
            }
        }
        return ans;
    }
};
