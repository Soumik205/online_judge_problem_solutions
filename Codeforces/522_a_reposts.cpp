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

const int MX = 10005;
vector < int > adj[MX];
bool visited[MX];
map < string, int > mp;
map < int, string > mp2;
int level[MX];

void dfs (int src) {
    visited[src] = true;
    for (auto dest: adj[src]) {
        if (!visited[dest]) {
            level[dest] = level[src] + 1;
            dfs (dest);
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

    RESET (visited, false);
    for (int i = 0; i < MX; i++) adj[i].clear();
    RESET (level, 0);
    mp.clear(), mp2.clear();

    int n;  cin >> n;
    int value = 0;
    int x = 1;
    for (int i = 0; i < n; i++) {
        string a, b ,c;     cin >> a >> b >> c;
        transform (a.begin(), a.end(), a.begin(), ::toupper);
        transform (c.begin(), c.end(), c.begin(), ::toupper);
        // cout << a << " " << c << endl;
        if (mp[c] == 0) {
            // cout << c << " " << x << endl;
            mp2[x] = c;
            mp[c] = x++;
        }
        if (mp[a] == 0) {
            mp2[x] = a;
            mp[a] = x++;
        }
        int u = mp[c];
        int v = mp[a];
        // cout << u << " " << v << endl;
        adj[u].push_back(v);
    }
    // for (auto it : mp) cout << it.F << " " << it.S << endl;

    level[1] = 1;
    dfs (1);
    sort (level, level + MX, greater < int > ());
    cout << level[0] << endl;
    return 0;
}