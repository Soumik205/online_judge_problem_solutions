class Solution {
public:
    void dfs (int src, vector<vector<int>>& edges, vector<int>& visited, vector<vector<int>>& adj) {
        stack < int > st;
        st.push(src);
        visited[src] = true;

        while (!st.empty()) {
            int u = st.top();
            st.pop();
            for (auto v: adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    st.push(v);
                }
            }
        }
    }

    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        vector<int> visited(n, 0);
        int ans = 0;

        for (int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfs(i, edges, visited, adj);
                ans++;
            }
        }
        return ans;
    }
};


/*
Statement:
You have a graph of n nodes. 
You are given an integer n and an array edges
where edges[i] = [ai, bi] indicates that there is an edge between ai and bi in the graph.
Return the number of connected components in the graph.

Constraints:
1 <= n <= 2000
1 <= edges.length <= 5000
edges[i].length == 2
0 <= ai <= bi < n
ai != bi
There are no repeated edges.

Input: n = 5, edges = [[0,1],[1,2],[3,4]]
Output: 2
Input: n = 5, edges = [[0,1],[1,2],[2,3],[3,4]]
Output: 1
*/
