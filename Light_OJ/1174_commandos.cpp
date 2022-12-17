/* I don't know why dfs doesn't work in this problem. maybe because of the cycles in udebug case 4. bfs works just fine */
/* The concept is to go from source to i'th house, and then dest to i'th house. both these shortest paths sum is ans. */
/* There is an unlimited supply of commando troops for the mission, so we can assign one commando
for destroying one building. So, the i'th commando have to:
1. Start from the building s and go to the i'th building
2. From the i'th building, go to building d
So, we have to calculate (shortest path from s to i) + (shortest path from d to i)
for all commandos, and find the maximum value among these. */

#include <bits/stdc++.h>
using namespace std;

#define MX 105
vector < int > adj[MX];
bool visited[MX];
int level[MX];
int level2[MX];

/* void dfs (int src, int *arr) {
    visited[src] = true;
    for (auto dest : adj[src]) {
        if (!visited[dest]) {
            arr[dest] = arr[src] + 1;
            dfs (dest, arr);
        }
    }
} */

void bfs (int src, int *arr) {
    queue < int > q;
    q.push(src);
    visited[src] = true;
    arr[src] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                arr[v] = arr[u] + 1;
                q.push(v);
            }
        }
    }
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    //optimize();

    int test;   cin >> test;
    int t = 0;
    while(test--) {
        for (int i = 0; i < MX; i++) adj[i].clear();
        memset (level, 0, sizeof level);
        memset (level2, 0, sizeof level2);

        int nodes;  cin >> nodes;
        int edges;  cin >> edges;
        while (edges--) {
            int u, v;   cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int src, dest;  cin >> src >> dest;
        
        memset (visited, false, sizeof visited);
        bfs (src, level);
        memset (visited, false, sizeof visited);
        bfs (dest, level2);

        // for (int i = 0; i < nodes; i++) cout << level[i] << " " << level2[i] << endl;

        int ans = 0;
        for (int i = 0; i < nodes; i++) {
            int count = level[i] + level2[i];
            ans = max (ans, count);
        }
        printf ("Case %d: %d\n", ++t, ans);
    }
    return 0;
}