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

const int MX = 10004;
vector < int > adj[MX];
bool visited[MX];

void dfs (int src) {
    visited[src] = true;
    for (auto dest : adj[src]) {
        if (!visited[dest]) dfs(dest);
    }
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        // freopen ("out.txt", "w", stdout);
    #endif
    //optimize();

    int test, m;    cin >> test >> m;
    set < int > s;
    LL count = 0;
    bool flag = false;

    for (int i = 0; i < test; i++) {
        int n;  cin >> n;
        if (n == 0) count++;
        else flag = true;
        while (n--) {
            int v;  cin >> v;
            adj[i].push_back(v + 100);
            adj[v + 100].push_back(i);
            s.insert(i);
            s.insert(v + 100);
        }
    }
    vector < int > v;
    int s_size = s.size();
    for (auto it : s) {
        int temp = it;
        v.push_back(temp);
    }

    int size = v.size();
    for (int i = 0; i < size; i++) {
        int temp = v[i];
        if (!visited[v[i]]) {
            dfs(temp);
            count++;
        }
    }
    if (flag) cout << count - 1 << endl;
    else cout << count << endl;
    return 0;
}