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
VI adj[MX];
int indegree[MX];
bool visited[MX];
int nodes, edges;   
VI ans;
map < string, int > mp;
map < int, string > mp2;
bool check = false;
bool jhamela = false;

bool alltopo () {
    bool flag = false;
    for (int i = 1; i <= nodes; i++) {
        if (indegree[i] == 0 && !visited[i] && !check && !jhamela) {
            for (auto dest : adj[i]) indegree[dest]--; 
            ans.push_back(i);
            visited[i] = true;
            alltopo();

            visited[i] = false;
            ans.erase(ans.end() - 1);
            for (auto dest : adj[i]) indegree[dest]++;
            flag = true;
        }
    }

    // have to do this dual flag and return thing to avoid TLE (check, jhamela)
    // because if we don't break it after finding the first ans, it will backtrack through the whole thing
    // and that's a highly time consuming task
    // and if we don't find the ans.size() not eual nodes in the first case, then there doesn't exist any ans. so print NO.

    if (!flag && !check && !jhamela) { 
        /* for (auto i : ans) cout << mp2[i] << " ";
        cout << endl; */
        if (ans.size() == nodes) {
            check = true;
            return 0;
        }
        else {
            jhamela = true;
            return 0;
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
        int edges;  cin >> edges;
        vector < pair < string, string > > e;
        set < string > nod;
        vector < string > no;

        // system input
        while (edges--) {
            string u, v;    cin >> u >> v;
            e.push_back(make_pair(u, v));
            nod.insert(u);
            nod.insert(v);
        }
        for (auto it : nod) no.push_back(it);

        // nodes input
        nodes = no.size();
        int x = 1;
        for (int i = 0; i < nodes; i++) {
            string temp = no[i];
            mp2[x] = temp;
            mp[temp] = x++;
            // cout << temp << " " << mp[temp] << endl;
        }

        // debug (node checking)
        /* cout << nodes << endl;
        for (int i = 0; i < nodes; i++) cout << no[i] << " ";
        cout << endl; */

        // edge input
        int e_size = e.size();
        for (int i = 0; i < e_size; i++) {
            string u = e[i].F;
            string v = e[i].S;
            adj[mp[u]].push_back(mp[v]);
            indegree[mp[v]]++;
        }

        // debug (indegree checking)
        /* for (int i = 1; i <= nodes; i++) cout << indegree[i] << " ";
        cout << endl; */
        
        // output
        alltopo();
        printf ("Case %d: ", ++t);
        if (check) cout << "Yes" << endl;
        else cout << "No" << endl;
        
        // cleaning
        check = false;
        jhamela = false;
        e.clear();
        nod.clear();
        for (int i = 0; i <= nodes * 10; i++) adj[i].clear();
        RESET (indegree, 0);
        RESET (visited, false);
        nodes = 0, edges = 0;
        ans.clear();
        mp.clear();
        mp2.clear();
    }
    return 0; 
}