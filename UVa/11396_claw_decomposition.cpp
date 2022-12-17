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

int dx[] = {1,1,0,-1,-1,-1, 0, 1}; // trick to explore an implicit 2D grid
int dy[] = {0,1,1, 1, 0,-1,-1,-1};  // S,SE,E,NE,N,NW,W,SW neighbors

// int dx[] = {1, 0, -1, 0}; // trick to explore an implicit 2D grid
// int dy[] = {0, 1, 0, -1};  // S,E,N,W neighbors

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const LL infLL = 9000000000000000000;

/************************************* END OF TEMPLATE *************************************/

const int MX = 100005;
VI adj[MX];
bool visited[MX];
int color[MX];
int red = 1;
int blue = 2;

int bfs (int src) {
    visited[src] = true;
    color[src] = red;
    queue < int > q;
    q.push(src);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                if (color[u] == red) color[v] = blue;
                else color[v] = red;
                q.push(v);
            }
            if (color[u] == color[v]) return -1;
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
    // optimize();

    while (true) {
        int n;  cin >> n;
        if (n == 0) return 0;

        for (int i = 0; i <= n; i++) adj[i].clear();
        RESET (visited, false);
        RESET (color, 0);
        
        int u, v;   
        while (true) {
            cin >> u >> v;
            if (u == 0 && v == 0) break;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        if (bfs(1) == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}