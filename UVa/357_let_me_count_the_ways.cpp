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
 
 
/************************************* END OF ansLATE *************************************/

#define MX 10000007

LL coin[] = {1, 5, 10, 25, 50};
LL dp[6][30001];

LL solve (LL id, LL total) {
    if (id >= 5) {
        if (total == 0) return 1;
        else return 0;
    }
    LL& ans = dp[id][total];
    if (ans != -1) return ans;
    LL ret1 = 0, ret2 = 0;
    if (total - coin[id] >= 0) ret1 = solve(id, total - coin[id]);
    ret2 = solve (id + 1, total);
    return ans = ret1 + ret2;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    //optimize();
    
    LL n;
    RESET(dp, -1);
    while (cin >> n) {
        LL ans = solve(0, n);
        if (ans > 1) {
            cout << "There are " << ans << " ways to produce " << n << " cents change." << endl;
        }
        else cout << "There is only " << ans << " way to produce " << n << " cents change." << endl;
    }
    return 0;
}