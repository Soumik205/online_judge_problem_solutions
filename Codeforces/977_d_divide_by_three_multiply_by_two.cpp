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
#define mp make_pair
#define all(c)		c.begin(),c.end()
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

VL v;
VL adj[500];
bool visited[500]; //by deafult is false if decleared in global 
int n;
stack < LL > st;

void dfs (int u) {
    visited[u] = true;
    for (auto it : adj[u]) {
        if (!visited[it]) dfs(it);
    }   
    st.push(u);
}

int main() {
    #ifndef ONLINE_JUDGE
        //freopen ("in.txt", "r", stdin);
        //freopen ("out.txt", "w", stdout);
    #endif
    //optimize();
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        LL temp;   cin >> temp;
        v.pb(temp);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((v[i] == v[j] / 2) and (v[j] % 2 == 0)) {
                adj[i].pb(j); //pushing the index in adj matrix because the value is too high (3x10^18)
            }
            if ((v[j] == v[i] / 3) and v[i] % 3 == 0) {
                adj[i].pb(j); //pushing the index in adj matrix because the value is too high (3x10^18)
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i); //the bfs here is being run on the indices not values. searching the indices to find the next takeable index
        }
    }

    while (!st.empty()) {
        cout << v[st.top()] << " "; //giving output of the values on basis of the indices
        st.pop();
    }
    cout << endl;
    return 0;
}