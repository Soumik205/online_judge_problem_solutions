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

#define MX 2050

vector < int > adj[MX];
bool visited[MX];
int color[MX];
int red = 1;
int yellow = 2;

int bfs (int src) {
	RESET (visited, 0);
	//RESET (color, 0);

	queue < int > q;
	q.push (src);
	visited[src] = 1;
	color[src] = red;

	while (!q.empty()) {
		int u = q.front();
		q.pop();

		for (int i = 0; i < adj[u].size(); i++) {
			int v = adj[u][i];
			if (!visited[v]) {
				visited[v] = true;
				q.push(v);

				if (color[u] == red) color[v] = yellow;
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
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    //optimize();

	int test;	cin >> test;
	int t = 0;
	while (test--) {
		RESET (visited, 0);
		RESET (color, 0);
		for (int i = 0; i < MX; i++) adj[i].clear();

		int nodes, edges;	cin >> nodes >> edges;
		for (int i = 0; i < edges; i++) {
			int u, v;	cin >> u >> v;
			adj[u].pb(v);
			adj[v].pb(u);
		}

		/*
		for(int i=1; i<=nodes; i++) {
			for(int j=0; j<adj[i].size(); j++) cout<<"Node is: "<<i<<" "<<adj[i][j]<<" "<<endl;
				cout<<endl;
		}
		*/

		bool homo = false;
		for (int i = 1; i <= nodes; i++) {
			if (bfs(i) == -1) homo = true;
		}

		if (!homo) printf("Scenario #%d:\nNo suspicious bugs found!\n", ++t);
		else printf("Scenario #%d:\nSuspicious bugs found!\n", ++t);

		//for (int i = 1; i <= nodes; i++) cout << color[i] << " ";
		//cout << endl;
	}
	return 0;
}