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
int elements_in_components = 0; // to pass the corner case where there is a compo of 1 element and another compo of 4 elements
int r = 0, b = 0;

int bfs (int src) {
    visited[src] = true;
    color[src] = red;
    r++;
    queue < int > q;
    q.push(src);
    elements_in_components = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (auto v : adj[u]) {
            if (!visited[v]) {
                elements_in_components++;
                visited[v] = true;
                if (color[u] == red) {
                    color[v] = blue;
                    b++;
                }
                else {
                    color[v] = red;
                    r++;
                }
                q.push(v);
            }
            else {
                if (color[v] == color[u]) return -1;
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
    // optimize();

    int test;   cin >> test;
    while (test--) {
        for (int i = 0; i < MX; i++) adj[i].clear();
        RESET (visited, false);
        RESET (color, 0);


        int nodes, edges;   cin >> nodes >> edges;
        for (int i = 0; i < edges; i++) {
            int u, v;   cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bool flag = false;
        int ans = 0;
        for (int i = 0; i < nodes; i++) {
            if (!visited[i]) {
                r = 0, b = 0;
                elements_in_components = 0;
                int x = bfs(i);
                if (elements_in_components == 0) {
                    ans++;
                    color[i] = 0;
                }
                else ans += min (r, b);
                if (x == -1) flag = true;
            }
        }

        if (flag) cout << "-1" << endl;
        else cout << ans << endl;
    }
    return 0;
}