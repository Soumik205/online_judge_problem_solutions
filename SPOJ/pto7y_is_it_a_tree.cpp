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

#define MX 100005

VI adj[MX];
bool visited[MX];
bool cycle[MX];

bool cycleFound = false;
bool disconnected = false;


void dfs (int src, int parent) {
	visited[src] = true;

	for (auto dest : adj[src]) {
		if (!cycle[dest]) cycle[dest] = true;
		else if (cycle[dest] && dest != parent) cycleFound = true; 

		//if (cycleFound) cout << "Found at " << dest << endl;
	}
	for (auto dest : adj[src]) {
		if (!visited[dest]) {
			dfs(dest, src);
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

	int nodes, edges;	cin >> nodes >> edges;
	while (edges--) {
		int u, v;	cin >> u >> v;
		adj[u].pb(v);
		adj[v].pb(u);
	}

	dfs (1, 1);

	for (int i = 1; i <= nodes; i++) {
		if (!visited[i]) {
			disconnected = true;
			//cout << i << endl;
		}
	}

	if (disconnected || cycleFound) cout << "NO" << endl;
	else cout << "YES" << endl;

	return 0;
}

/*
A graph is a tree if it has two conditions:
1. It doesn't contain a cycle 
2. It is not disconnected

So i used dfs to find which nodes were not visited and this got the no of nodes that are disconnected.
If no node is disconnectd (all the nodes are visited after running the dfs) then the graph is connected.

And to find cycle you have to keep track to the parent node of each child. 
https://www.youtube.com/watch?v=vXrv3kruvwE see this video for better understanding. 
*/