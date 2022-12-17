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

int main()
{
    /* #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif */
    //optimize();

    int nodes, edges;
    
    while (cin >> nodes >> edges) {
        if (nodes == 0 && edges == 0) break;

        int indegree[MX];
        RESET (indegree, 0);
        VI ans;

        for (int i = 0; i < edges; i++) {
            int u, v;   cin >> u >> v;
            adj[u].push_back(v);
            indegree[v]++;
        }

        /* for (int i = 1; i <= nodes; i++) cout << indegree[i] << " ";
        cout << endl; */

        int count = 0;

        while (count < nodes) {
            for (int i = 1; i <= nodes; i++) {
                if (indegree[i] == 0) {
                    ans.push_back(i);
                    indegree[i] = -1;
                    count++;
                    
                    for (auto dest : adj[i]) {
                        if (indegree[dest] > 0) indegree[dest]--;
                        // cout << i << " " << dest << " " << indegree[dest] << endl;
                    } 
                    i = nodes;
                }
            }
        }
        int size = ans.size();
        for (int i = 0; i < size; i++) {
            cout << ans[i];
            if (i < (size - 1)) cout << " ";
        }
        cout << endl;
        ans.clear();
        for (int i = 0; i <= nodes; i++) adj[i].clear();
    }
    return 0;
}