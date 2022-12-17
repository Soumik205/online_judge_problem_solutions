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

const int MX = 100005;
vector < int > adj[MX];
bool visited[MX];
vector < int > order;
int component[MX];
int cnt = 0;
vector < pair < int, int >> vp;

void dfs1 (int src) {
    visited[src] = true;
    for (auto dest : adj[src]) {
        if(!visited[dest]) dfs1 (dest);
    }
    order.push_back(src);
}
void dfs2 (int src) {
    visited[src] = true;
    component[src] = cnt;
    for (auto dest : adj[src]) {
        if(!visited[dest]) dfs2 (dest);
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    // optimize();

    int test;   cin >> test;
    int t = 0;
    while (test--) {
        getchar();
        printf ("Case %d: ", ++t);
        int nodes, edges;   cin >> nodes >> edges;
        for (int i = 0; i < edges; i++) {
            int u, v;   cin >> u >> v;
            adj[u].push_back(v);
            vp.push_back(make_pair(u, v));
        }

        // SCC
        memset(visited, false, sizeof visited);
        for (int i = 1; i <= nodes; i++) {
            if (!visited[i]) dfs1(i);
        }

        // reversing the direction
        /* for (int i = 0; i <= nodes; i++) adj[i].clear();
        for (int i = 0; i < edges; i++) {
            int u = vp[i].second;
            int v = vp[i].first;
            adj[u].push_back(v);
        } */

        // calling the second bfs
        memset(visited, false, sizeof visited);
        cnt = 0;
        reverse (order.begin(), order.end());
        for (int i = 0; i < nodes; i++) {
            int temp = order[i];
            if (!visited[temp]) {
                ++cnt;
                dfs2 (temp);
            }
        }

        // debug
        /* cout << order.size() << endl;
        for (int i = 0; i < nodes; i++) cout << order[i] << " ";
        cout << endl; */

        // output
        cout << cnt << endl;
        /* for (int i = 1; i <= nodes; i++) cout << component[i] << " ";
        cout << endl; */

        // clearing section
        memset (visited, false, sizeof visited);
        for (int i = 0; i <= nodes; i++) adj[i].clear();
        order.clear();
        memset (component, 0, sizeof component);
        cnt = 0; 
        vp.clear();
    }
    return 0;
}



/* 
2
 
5 4
1 2
1 3
3 4
5 3 

4 4
1 2
1 3
4 2
4 3

 */