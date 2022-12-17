#include <bits/stdc++.h>

using namespace std;


vector < int > adj[420];
int visited[420];
int color[420];
int red = 1;
int pink = 2;


int bfs (int s)
{
    memset (visited, 0, sizeof visited);
    memset (color, 0, sizeof color);

    queue < int > Q;
    Q.push (s);
    visited[s] = 1;
    color[s] = red;

    while (!Q.empty())
    {
        int u = Q.front();
        Q.pop();

        for (int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];

            if (visited[v] == 0) {
                visited[v] = 1;
                Q.push(v);

                if (color[u] == red) color[v] = pink;
                else color[v] = red;
            }
            else {
                if (color[u] == color[v]) return -1;
            }
        }
    }

    return 1;
} 

int main()
{
    while (1) {
        int n;  cin >> n;

        if (n == 0) break;

        int edges;  cin >> edges;
        int x, y;

        for (int i = 0; i < 420; i++) adj[i].clear();

        while (edges--) {
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        if (bfs(0) == 1) printf("BICOLORABLE.\n");
        else if (bfs(0) == -1) printf("NOT BICOLORABLE.\n");
    }
    return 0;
}