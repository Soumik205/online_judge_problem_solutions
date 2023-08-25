class Solution {
public:
    int red = 1;
    int blue = 2;

    bool bfs (int src, vector<vector<int>>& graph, vector<int>& visited, vector<int>& color) {
        queue < int > q;
        q.push(src);
        visited[src] = true;
        color[src] = red;

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            for (auto v: graph[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                    if (color[u] == red) color[v] = blue;
                    else color[v] = red;
                }
                if (color[u] == color[v]) return false;
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector < int > visited(n, 0);
        vector < int > color(n, 0);
        bool flag = false;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                if (!bfs(i, graph, visited, color)) flag = true;
            }
        }
        if (flag) return false;
        else return true;
    }
};