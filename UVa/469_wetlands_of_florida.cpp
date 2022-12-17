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

int dx[] = {1, 1, 0, -1, -1, -1, 0, 1}; // trick to explore an implicit 2D grid
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};  // S,SE,E,NE,N,NW,W,SW neighbors

// int dx[] = {1, 0, -1, 0}; // trick to explore an implicit 2D grid
// int dy[] = {0, 1, 0, -1};  // S,E,N,W neighbors

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const LL infLL = 9000000000000000000;

/************************************* END OF TEMPLATE *************************************/

const int MX = 105;
string adj[MX];
bool visited[MX][MX];
int n = 0, m = 0;
int compo = 0;

void dfs (int i, int j) {
    if (i < 0 || i >= n) return;
    if (j < 0 || j >= m) return;
    if (visited[i][j]) return;
    if (adj[i][j] != 'W') return;

    visited[i][j] = true;
    compo++;
    for (int d = 0; d < 8; d++) {
        int tempx = i + dx[d];
        int tempy = j + dy[d];
        if (!visited[tempx][tempy]) dfs (tempx, tempy);
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
    string s;
    getline (cin, s);
    getline (cin, s);
    int t = 0;
    while (test--) {
        RESET (adj, 0);
        RESET (visited, false);
        n = 0, m = 0;
        compo = 0;
        int q = 0, w = 0; // didn't use

        while (true) {
            getline(cin, s);
            if (s.empty()) {
                s.clear();
                break;
            }

            if (s[0] == 'L' || s[0] == 'W') {
                adj[n++] = s;
                m = s.size();
            }
            else if (isdigit(s[0])) {
                istringstream ss(s);
                int a, b;
                ss >> a >> b;

                RESET (visited, false);
                compo = 0;
                dfs (a - 1, b - 1);
                cout << compo << endl;
            }
            else break;
        }
        if (test) cout << endl;
    }
    return 0;
}
