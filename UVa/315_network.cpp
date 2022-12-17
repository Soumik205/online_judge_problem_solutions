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

const int MX = 105;
int arr[MX][MX];
vector < int > adj[MX];
vector < int > edges;
int low[MX];
int dfstime[MX];
bool cutnode[MX];
vector < pair < int , int >> bridges;
int time_count = 0, child_of_root = 0, dfsroot = 0;

void dfsCut(int u, int par) {
    low[u] = dfstime[u] = ++time_count;
    for (auto v : adj[u]) {
        if (dfstime[v] == 0) {
            if (u == dfsroot) child_of_root++;
            dfsCut(v, u);
            if (low[v] >= dfstime[u]) cutnode[u] = true;
            if (low[v] > dfstime[u]) bridges.emplace_back(u, v);
            low[u] = min(low[u], low[v]);
        }
        else if (v != par) { // back edge
            low[u] = min(low[u], dfstime[v]);
        }
    }
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    // optimize();

    int t = 0;
    while (true) {
        int n;  cin >> n;
        if (n == 0) break;

        for (int i = 0; i <= n; i++) adj[i].clear();
        memset (low, 0, sizeof low);
        memset (dfstime, 0, sizeof dfstime);
        memset (cutnode, false, sizeof cutnode);
        bridges.clear();
        time_count = 0, child_of_root = 0, dfsroot = 0;
        RESET (arr, 0);
        edges.clear();
        
        string s;  
        bool flag = false;
        while (true) {
            if (flag) {
                getline (cin, s);
                if (s[0] - '0' == 0) break;
                
                edges.clear();
                stringstream ss(s);
                int x;
                while (ss >> x) {
                    edges.push_back(x);
                }
                int u = edges[0];
                for (int i = 1; i < edges.size(); i++) {
                    int v = edges[i];
                    arr[u][v] = 1;
                    arr[v][u] = 1;
                }

                for (int i = 1; i <= n; i++) {
                    for (int j = 1; j <= n; j++) {
                        if (arr[i][j] == 1) adj[i].push_back(j);
                    }
                }
            }
            else {
                getline (cin, s);
                flag = true;
            }
        }
        time_count = 0;
        for (int i = 1; i <= n; i++) {
            if (dfstime[i] > 0) continue;
            dfsroot = i;
            child_of_root = 0;
            dfsCut(i, -1);
            cutnode[dfsroot] = (child_of_root > 1); // if the root has more than 1 child, then it's also a cutnode
        }
        int ans = 0;
        for (int i = 1; i <= n; i++) if (cutnode[i]) ans++;
        cout << ans << endl;
    }
    return 0;
}