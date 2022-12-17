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
int indegree[MX];

int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    //optimize();

    int nodes, edges;
    int t = 0;
    while (cin >> nodes) {
        string arr[nodes];
        map < string , int > mp;
        map < int, string > mp2;
        
        int x = 0;
        for (int i = 0; i < nodes; i++) {
            cin >> arr[i];
            mp2[x] = arr[i];
            mp[arr[i]] = x;
            x++;
        }

        cin >> edges;
        for (int i = 0; i < edges; i++) {
            string u, v;    cin >> u >> v;
            adj[mp[u]].push_back(mp[v]);
            indegree[mp[v]]++;
        }

        priority_queue < int, vector < int >, greater < int > > q;
        vector < int > ans;
        for (int i = 0; i < nodes; i++) {
            if (indegree[i] == 0) q.push(i);
        }

        while (!q.empty()) {
            int src = q.top();
            q.pop();
            for (auto dest : adj[src]) {
                indegree[dest]--;
                if (indegree[dest] == 0) q.push(dest);
            }
            ans.pb(src);
        }
        int size = ans.size();
        printf("Case #%d: Dilbert should drink beverages in this order: ", ++t);
        for (int i = 0; i < size; i++) {
            cout << mp2[ans[i]];
            if (i < size - 1) cout << " ";
            else cout << ".";
        }
        cout << endl;
        cout << endl;

        ans.clear();
        for (int i = 0; i <= nodes; i++) adj[i].clear();
        RESET (indegree, 0);
        getchar();
    }
    return 0;
}

