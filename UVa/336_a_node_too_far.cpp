#include <bits/stdc++.h>

using namespace std;

map < int, int > dist;

void bfs (int src, map < int, vector < int > > graph) 
{
    queue < int > Q;
    Q.push(src);
    dist[src] = 0;

    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();

        for (int i = 0; i < graph[u].size(); i++) {
            int v = graph[u][i];

            if (!dist.count(v)) {
                dist[v] = dist[u] + 1;
                Q.push(v);
            }
        }
    }
}

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int edges, tc = 0, x, y, source, TTL, count = 0;

    while (1) {
        cin >> edges;
        if (edges == 0) break;

        map < int, vector < int > > graph;

        while (edges--) {
            cin >> x >> y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        while (1) {
            cin >> source >> TTL;
            if (source == 0 and TTL == 0) break;

            dist.clear();
            bfs (source, graph);

            for (auto &it : dist) {
                if (it.second > TTL) count++;
            }

            count += graph.size() - dist.size();

            printf ("Case %d: %d nodes not reachable from node %d with TTL = %d.\n", ++tc, count, source, TTL);
 
            count = 0;
        }
    }

    return 0;    
}