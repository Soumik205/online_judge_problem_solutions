#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

const int mx = 1005;
vector < int > adj[mx];
int color[mx];
int visited[mx];

int red = 1;
int blue = 2;

vector < int > b_nodes_red;
vector < int > b_nodes_blue;

bool bfs (int src) {
    queue < int > q;
    q.push(src);
    visited[src] = true;
    color[src] = red;
    b_nodes_red.push_back(src);


    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto v: adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
                if (color[u] == red) {
                    color[v] = blue;
                    b_nodes_blue.push_back(v);
                }
                else {
                    color[v] = red;
                    b_nodes_red.push_back(v);
                }
            }
            if (color[u] == color[v]) return false;
        }
    }
    return true;
}


int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int test;   cin >> test;
    while (test--) {
        memset (visited, 0, sizeof visited);
        memset (color, 0, sizeof color);
        for (int i = 0; i < mx; i++) adj[i].clear();
        b_nodes_blue.clear();
        b_nodes_red.clear();

        int nodes, edges;   cin >> nodes >> edges;
        while(edges--) {
            int u, v;   cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bool bipartite = true;

        for (int i = 0; i < nodes; i++) {
            if (!visited[i]) {
                if (!bfs(i)) {
                    bipartite = false;
                    break;
                }
            }
        }
        if (bipartite) {
            cout << "Bipartite!\nThe red nodes are: ";
            for (int i = 0; i < b_nodes_red.size(); i++) cout << b_nodes_red[i] << " ";
            cout << endl;
            cout << "The blue nodes are: ";
            for (int i = 0; i < b_nodes_blue.size(); i++) cout << b_nodes_blue[i] << " ";
            cout << endl;
        }
        else cout << "Not Bipartite" << endl;
    }
    return 0;
}


/*
Statement:

Given a graph print either of the set of the vertices that are colored with the same color. And if the graph
is not bipartite print “-1”. Test cases also included the cases when a graph is not connected.
*/


/*
i/p: 
4
4 5
0 1
0 2
0 3
1 2
2 3
4 3
0 1
0 2
0 3
8 6
0 1
2 1
3 4
5 6
7 5
6 7
8 5
0 1
0 2
3 5
4 6
7 6

o/p:
Not Bipartite
Bipartite!
The red nodes are: 0 
The blue nodes are: 1 2 3 
Not Bipartite
Bipartite!
The red nodes are: 0 3 4 7 
The blue nodes are: 1 2 5 6 

*/
