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

// int dx[] = {1,1,0,-1,-1,-1, 0, 1}; // trick to explore an implicit 2D grid
// int dy[] = {0,1,1, 1, 0,-1,-1,-1};  // S,SE,E,NE,N,NW,W,SW neighbors

int dx[] = {1, 0, -1, 0}; // trick to explore an implicit 2D grid
int dy[] = {0, 1, 0, -1};  // S,SE,E,NE,N,NW,W,SW neighbors

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const LL infLL = 9000000000000000000;

/************************************* END OF TEMPLATE *************************************/

const int MX = 105;
int n, m;
char adj[MX][MX];
bool visited[MX][MX];
int king_size = 0;
int comp_size = 0;
VI com;
char land;
// int ok = 0; // debugging tool



void dfs (int x, int y) {
    if (x < 0 || x >= m) return;
    if (y < 0) y = n - 1;
    if (y >= n) y = 0;

    if(visited[x][y]) return;

    visited[x][y] = true;
    comp_size++;
    
    for (int d = 0; d < 4; d++) {
        int tempx = x + dx[d];
        int tempy = y + dy[d];

        if (!visited[tempx][tempy]) dfs (x + dx[d], y + dy[d]);
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    // optimize();

    while (cin >> m >> n) {
        RESET (adj, 0);
        RESET (visited, false);
        king_size = 0;
        comp_size = 0;
        com.clear();
        land = 0;
        

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) cin >> adj[i][j];
        }
        int x, y;   cin >> x >> y;
        land = adj[x][y];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (adj[i][j] != land) visited[i][j] = true;
            }
        }

        // debug
        /* for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) cout << visited[i][j];
            cout << endl;
        } 
        cout << endl;
        cout << "Ok" << ++ok << endl; */

        dfs (x, y);
        king_size = comp_size;
        
        // debug
        /* cout << "Ok" << ++ok << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) cout << visited[i][j];
            cout << endl;
        } 
        cout << endl;
        cout << "Ok" << ++ok << endl; */

        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (adj[i][j] == land) {
                    if (!visited[i][j]) {
                        // cout << i << " " << j << endl;
                        comp_size = 0;
                        dfs(i, j);
                        com.push_back(comp_size);
                        // cout << com.size() << endl;
                    }
                }
            }
        }


        // debug
        /* for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) cout << visited[i][j];
            cout << endl;
        }  */

        // output
        int ans = 0;
        sort (com.rbegin(), com.rend());
        if (com.size()) ans = com[0];
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}

/* 
5 5
wwwww
wwllw
wwwww
wllww
wwwww
1 3
 */