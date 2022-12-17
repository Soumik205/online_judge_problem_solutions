#include <bits/stdc++.h>
using namespace std;

//typedefs
typedef long long LL;
typedef vector < int > VI;
typedef vector < LL > VL;
typedef vector < VI > VVI;
typedef vector < VL > VVL;
typedef pair < int, int > PII;
typedef pair < double, double > PDD;
typedef pair < LL, LL > PLL;
typedef vector < PII > VII;
typedef vector < PLL > VLL;

//#Defines
#define rep (i, a, b)	for (i = a; i <= b; i++)
#define repR (i, a, b)	for (i = a; i >= b; i--)
#define pb push_back
// #define pb emplace_back
#define F first
#define S second
//#define mp make_pair
#define all(c)		c.begin(), c.end()
#define rev(c)      c.rbegin(), c.rend()
#define endl '\n'
#define pf printf
#define sf scanf
#define MOD 1000000007
//#define harmonic(n) 0.57721566490153286l+log(n)
//if harmonic numbers need to be calculated, precalculate upto 1e6, then for any x > 1e6
//call harmonic(x + 0.5)
#define RESET(a, b)	memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const LL infLL = 9000000000000000000;


/************************************* END OF TEMPLATE *************************************/

const int MX = 10004;
VI adj[MX];
bool visited[MX];
int depth[MX];
int maxx = 0;
int second_node;

void bfs (int src, int nodes) {
	RESET (visited, 0);
	RESET (depth, 0);

	queue < int > q;
	q.push(src);
	visited[src] = true;

	while (!q.empty()) {
		int u = q.front();
		q.pop();

		for (int i = 0; i < adj[u].size(); i++) {
			int v = adj[u][i];

			if (!visited[v]) {
				visited[v] = true;
				q.push(v);
				depth[v] = depth[u] +  1;
			}
		}
	}

	for (int i = 1; i <= nodes; i++) {
		if (depth[i] > maxx) {
			maxx = depth[i];
			second_node = i;
		}
	}
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        //freopen ("out.txt", "w", stdout);
    #endif
    //optimize();

    int nodes, edges;	cin >> nodes;
    edges = nodes - 1;

    while (edges--) {
    	int x, y;	cin >> x >> y;
    	adj[x].pb(y);
    	adj[y].pb(x);
    }

    bfs (1, nodes);
    bfs (second_node, nodes);
    
    cout << maxx << endl;
	return 0;
}

//the concept behind this is if you run bfs from any node, you will reach a leaf node
//and the longest path is always from a leaf node to it's most distant leaf node which is found by the second bfs.
//if you iterate through all nodes it will run on O(n*n) which gives TLE!
//for details: https://www.quora.com/How-does-following-algorithm-for-finding-longest-path-in-tree-work

/*20
1 2
2 3
3 5
4 5
5 6
6 7
7 8
8 9
9 10
10 11
6 12
12 13
13 14
14 15
15 16
16 17
18 1
19 18
20 19

ans = 13
*/