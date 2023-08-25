class Solution {
public:
    void bfs(int sx, int sy, int m, int n, vector<vector<int>>& heights, vector<vector<int>>& visited) {
        queue<pair<int, int>> q;
        q.push(make_pair(sx,sy));
        visited[sx][sy] = true;

        int dx[] = {1, 0, -1, 0};
        int dy[] = {0, -1, 0, 1};

        while (!q.empty()) {
            pair <int, int> u = q.front();
            q.pop();
            int ux = u.first;
            int uy = u.second;

            for (int i = 0; i < 4; i++) {
                int vx = ux + dx[i];
                int vy = uy + dy[i];

                if (vx >= 0 && vx < m && vy >= 0 && vy < n) {
                    if (!visited[vx][vy] && (heights[vx][vy] >= heights[ux][uy])) {
                        visited[vx][vy] = true;
                        q.push(make_pair(vx, vy));
                    }
                }
            }
        }
    }


    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();
        vector<vector<int>> visited1(m, vector<int>(n, 0));
        vector<vector<int>> visited2(m, vector<int>(n, 0));
        vector<vector<int>> ans;

        for (int i = 0; i < m; i++) {
            bfs (i, 0, m, n, heights, visited1);
        }
        for (int j = 0; j < n; j++) {
            bfs (0, j, m, n, heights, visited1);
        }
        for (int i = 0; i < m; i++) {
            bfs (i, n -1, m, n, heights, visited2);
        }
        for (int j = 0; j < n; j++) {
            bfs (m - 1, j, m, n, heights, visited2);
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (visited1[i][j] && visited2[i][j]) ans.push_back({i, j});
            }
        }

        return ans;
    }
};
