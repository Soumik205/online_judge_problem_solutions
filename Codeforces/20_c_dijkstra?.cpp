#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e15;
const int MX = 1e5 + 5;

int parent[MX];
long long dis[MX];
bool visited[MX];
vector < pair < long long, int> > adj[MX];
priority_queue < pair < long long, int > > pq;

void dijkstra (int src, int dest) {
    for (int i = 0; i < MX; i++) dis[i] = INF;
        
    pq.push({0, src}); //weight comes first, and then the adj node to help the sorting be easier inside pq & src index always has weight 0
    dis[src] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (int i = 0; i < (int)adj[u].size(); i++) {
            int v = adj[u][i].second;
            long long cost = adj[u][i].first;

            if (dis[v] > dis[u] + cost) {
                dis[v] = dis[u] + cost;
                parent[v] = u;

                if (!visited[v]) pq.push({-dis[v], v}); // pq max heap e ache. that means (-2, 2) > (-7, 5). So (-2, 2) age execute hobe. This is a neat trick!
            }
        }
        visited[u] = true; // visited na korle TLE dibe cause ek e node barbar itterate hobe
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        // freopen ("in.txt", "r", stdin);
        // freopen ("out.txt", "w", stdout);
    #endif
    // optimize();

    int n, m;   cin >> n >> m;
    while (m--)
    {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        adj[u].push_back({w, v});
        adj[v].push_back({w, u});
    }

    dijkstra (1, n);

    // path printing
    vector < int > ans;
    if (dis[n] == INF) cout << "-1" << endl;
    else {
        int x = n;
        while (x) {
            ans.push_back(x);
            x = parent[x];
        }
        reverse (ans.begin(), ans.end());
        for (auto i : ans) cout << i << " ";
    }
    cout << endl;

    // shortest distance
    // cout << dis[n] << endl;
    return 0;
}