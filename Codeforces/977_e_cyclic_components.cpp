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
#define mp make_pair
#define all(c)		c.begin(),c.end()
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
#define MX 1000006
VI adj[MX];
bitset < MX > visited;
VI v;

void dfs (int src) {
    visited[src] = 1;
    v.pb(src);
    for (auto it : adj[src]) {
        if (!visited[it]) {
            dfs(it);
        }
    }
}


int main() {
    #ifndef ONLINE_JUDGE
        //freopen ("in.txt", "r", stdin);
        //freopen ("out.txt", "w", stdout);
    #endif
    //optimize();
    
    int n, m;   cin >> n >> m;
    int ans = 0;
    
    while (m--) {
        int u, v;   cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            v.clear();
            dfs(i);
            bool flag = false;
            for (auto it : v) {
                if (adj[it].size() != 2) { //if every node has two adjacent nodes in a graph then it is connected
                    flag = true;
                    break;
                }
            }
            if (!flag) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}