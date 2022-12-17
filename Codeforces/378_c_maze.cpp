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

const int MX = 505;
char arr[MX][MX];
bool visited[MX][MX];
int n, m, k;    
int nodes;

void bfs (int sx, int sy) {
    queue < pair < int, int > > q;
    q.push(make_pair(sx, sy));
    visited[sx][sy] = true;
    nodes--;


    while (!q.empty() && nodes) {
        pair < int, int > u = q.front();
        int x = u.first;
        int y = u.second;
        q.pop();

        if (x != 0 && nodes) { // up
            if (!visited[x - 1][y]) {
                visited[x - 1][y] = true;
                nodes--;
                q.push(make_pair(x - 1, y));
            }
        }
        
        if (x != (n - 1) && nodes) { // down
            if (!visited[x + 1][y]) {
                visited[x + 1][y] = true;
                nodes--;
                q.push(make_pair(x + 1, y));
            }
        }
        if (y != 0 && nodes) { //left
            if (!visited[x][y - 1]) { 
                visited[x][y - 1] = true;
                nodes--;
                q.push(make_pair(x, y - 1));
            }
        }
        if (y != (m - 1) && nodes) { // right
            if (!visited[x][y + 1]) { 
                visited[x][y + 1] = true;
                nodes--;
                q.push(make_pair(x, y + 1));
            }
        }
    }
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        // freopen ("out.txt", "w", stdout);
    #endif
    //optimize();

    cin >> n >> m >> k;
    LL free = 0;
    int x, y;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == '#') visited[i][j] = true;
            else {
                free++;
                x = i; y = j;
            }
        }
    }

    nodes = free - k;

    bfs (x, y);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visited[i][j]) arr[i][j] = 'X';
            cout << arr[i][j];
        }
        cout << endl;
    }
    return 0;
}