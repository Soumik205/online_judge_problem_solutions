// i took the tutorial from CP3 and the book had the approach, i implemented it.

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

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const LL infLL = 9000000000000000000;

/************************************* END OF TEMPLATE *************************************/

const int MX = 105;
int adj[MX][MX];
bool visited[MX];
bool vis[MX];
vector < int > ans[MX];
char arr[MX][MX];
int n = 0;
int x = 0;


void dfs (int src) {
    visited[src] = true;
    ans[0].push_back(src);
    for (int i = 0; i < n; i++) {
        if (adj[src][i] == 1) {
            if (!visited[i]) dfs(i);
        }
    }
}

void dfs2 (int src) {
    vis[src] = true;
    for (int i = 0; i < n; i++) {
        if ((adj[src][i] == 1) && (x != i)) {
            if (!vis[i]) dfs2(i);
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

    int test;   cin >> test;
    int t = 0; 
    while (test--) {
        RESET (adj, 0);
        RESET (visited, false);
        RESET (vis, false);
        for (int i = 0; i < n; i++) ans[i].clear();
        RESET (arr, 0);

        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cin >> adj[i][j];
        }
        printf ("Case %d:\n", ++t);

        dfs (0);

        for (auto dest : ans[0]) {
            // cout << dest << ": ";
            RESET (vis, false);
            if (dest) {
                x = dest;
                dfs2 (0);
                for (int i = 0; i < n; i++) {
                    /* if (!vis[i]) cout << "Y" << " ";
                    else cout << "N" << " "; */
                    if (!vis[i]) ans[dest].push_back(i);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (auto j : ans[i]) {
                if (visited[j]) arr[i][j] = 'Y'; 
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] != 'Y') arr[i][j] = 'N';
            }
        }

        // ans
        cout << "+";
        for (int i = 0; i < (2 * n) - 1; i++) cout << "-";
        cout << "+" << endl;

        for (int i = 0; i < n; i++) {
            cout << "|";
            for (int j = 0; j < n; j++) cout << arr[i][j] << "|";
            cout << endl;
            cout << "+";
            for (int j = 0; j < (2 * n) - 1; j++) cout << "-";
            cout << "+" << endl;
        }
    }
    return 0;
}