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
map < char, int > mp;
map < int, char > mp2;

void alltopo () {
    bool flag = false;
    for (int i = 1; i <= nodes; i++) {
        if (indegree[i] == 0 && !visited[i]) {
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
    if (!flag) {
        if (ans.size() == 0) cout << "NO";
        for (int i = 0; i < ans.size(); i++) {
            cout << mp2[ans[i]];
            if (i < (ans.size() - 1)) cout << " ";
        }
        cout << endl;
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
    LL first = 0;
    int t = 0;

    string waste1;
    getline(cin, waste1);

    while (test--) {
        if (first) puts("");
        first = 1;

        // cout << "Case " << ++t << ": " << endl;
        string waste2;
        getline (cin, waste2);

        string line;     getline(cin, line);
        string e;     getline(cin, e);

        /* cout << line << endl;
        cout << e << endl; */

        vector < char > no;
        int l_size = line.size();
        for (int i = 0; i < l_size; i++) {
            if (isalpha(line[i])) no.push_back(line[i]);
        }
        sort(all(no));

        /* for (int i = 0; i < no.size(); i++) cout << no[i] << " ";
        cout << endl; */

        nodes = no.size();
        int x = 1;
        for (int i = 0; i < nodes; i++) {
            char temp = no[i];
            mp2[x] = temp;
            mp[temp] = x++;
        }

        int e_size = e.size();
        for (int i = 0; i < e_size; i += 4) {
            char u, v;
            u = e[i];
            v = e[i + 2];
            adj[mp[u]].push_back(mp[v]);
            indegree[mp[v]]++;
        }
        alltopo();


        no.clear();
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



/* 
1

A B F G
A<B B<F

 */