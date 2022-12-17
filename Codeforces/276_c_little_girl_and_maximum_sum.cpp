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


int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        // freopen ("out.txt", "w", stdout);
    #endif
    //optimize();

    LL n, q;   cin >> n >> q;
    VL v;
    for (int i = 0; i < n; i++) {
        int temp;   cin >> temp;
        v.push_back(temp);
    }
    sort (v.rbegin(), v.rend());

    LL arr[n + 1];
    RESET (arr, 0);
    LL dp[n];
    RESET (arr, 0);
    LL count = 0;

    for (int i = 0; i < q; i++) {
        int a, b;   cin >> a >> b;
        arr[a - 1]++;
        arr[b]--;
    }

    for (int i = 0; i < n; i++) {
        count += arr[i];
        dp[i] = count;
    }
    sort (dp, dp + n, greater < int > ());

    /* for (int i = 0; i <= n; i++) cout << dp[i] << " ";
    cout << endl;
    */

    LL ans = 0;
    for (int i = 0; i < n; i++) {
        LL t1 = v[i];
        LL t2 = dp[i];
        LL temp = t1 * t2;
        ans += temp;
    }

    cout << ans << endl;
    return 0;
}