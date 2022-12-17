#include <bits/stdc++.h>
using namespace std;

#define MX 100005

vector < int > adj[MX];
bool visited[MX];
int level[MX];

void dfs (int src) {
    visited[src] = true;
    for (auto dest : adj[src]) {
        if (!visited[dest]) {
            level[dest] = level[src] + 1;
            dfs (dest);
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

    int n;  cin >> n;
    for (int i = 1; i <= n; i++) {
        int v;  cin >> v;
        if (v == -1) v = 0;
        adj[i].push_back(v);
        adj[v].push_back(i);
    }
    dfs(0);

    /* for (int i = 0; i <= n; i++) cout << level[i] << " ";
    cout << endl; */

    int ans = 0;
    for (int i = 1; i <= n + 1; i++) ans = max (ans, level[i]);
    cout << ans << endl;
}