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
#define RESET(a,b)	memset(a,b,sizeof(a))
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const LL infLL = 9000000000000000000;

int m, c;
int price[25][25];
int dp[210][25];

int solve (int money, int id) {
    if (money < 0) return -inf;
    if (id == c) return m - money;
    int &ans = dp[money][id];
    if (ans != -1) return ans;
    for (int model = 1; model <= price[id][0]; model++) {
        ans = max (ans, solve (money - price[id][model], id + 1));
    }
    return ans;
}

int main() {
    #ifndef ONLINE_JUDGE
        //freopen ("in.txt", "r", stdin);
        //freopen ("out.txt", "w", stdout);
    #endif
    optimize();
    
    int solution;
    int test;   cin >> test;
    while (test--) {
        cin >> m >> c;

        for (int i = 0; i < c; i++) {
            cin >> price[i][0];
            for (int j = 1; j <= price[i][0]; j++) cin >> price[i][j];
        }
        RESET (dp, -1);
        solution = solve (m, 0);
        if (solution < 0) cout << "no solution" << endl;
        else cout << solution << endl;
    }
    return 0;
}