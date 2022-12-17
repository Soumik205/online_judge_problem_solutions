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

const int MX = 20005;
VI adj[MX];
bool visited[MX];
int color[MX];
int red = 1;
int blue = 2;
int r = 0, b = 0;

void bfs (int src) {
	queue < int > q;
	if (!visited[src]) {
		q.push(src);
		visited[src] = true;
		color[src] = red;
	}

	while (!q.empty()) {
		int u = q.front();
		q.pop();
		if (color[u] == red) r++;
		if (color[u] == blue) b++;
		
		for (int i = 0; i < adj[u].size(); i++) {
			int v = adj[u][i];
			if (!visited[v]) {
				q.push(v);
				visited[v] = true;
				if (color[u] == red) color[v] = blue;
				else color[v] = red;
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

    int test;	cin >> test;
    int t = 0;

    while (test--) {
    	RESET (visited, 0);
		RESET (color, 0);
		for (int i = 0; i < MX; i++) adj[i].clear();

    	int edges;	cin >> edges;
    	set <int> st;
    	while (edges--) {
    		int x, y;	cin >> x >> y;
    		adj[x].pb(y);
    		adj[y].pb(x);
    		st.insert(x);
    		st.insert(y);
    	}

		int ans = 0;	
		for (auto x: st) {
			if (visited[x]) continue;
			r = 0, b = 0;
			bfs(x);
			ans += max(r, b);
		}
		cout << "Case " << ++t << ": " <<  ans << endl;
    }
    return 0;
}