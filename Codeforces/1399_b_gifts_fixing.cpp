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

int dx[] = {1,1,0,-1,-1,-1, 0, 1}; // trick to explore an implicit 2D grid
int dy[] = {0,1,1, 1, 0,-1,-1,-1};  // S,SE,E,NE,N,NW,W,SW neighbors


LL gcd (LL a, LL b) { return b == 0 ? a : gcd (b, a % b); }
LL lcm (LL a, LL b) { return a * (b / gcd (a, b)); }

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const LL infLL = 9000000000000000000;

/************************************* END OF TEMPLATE *************************************/

int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    // optimize();

    LL test;   cin >> test;
    while (test--) {
        int n;  cin >> n;
        LL arra[n + 2], arrb[n + 2];
        RESET (arra, 0);
        RESET (arrb, 0);
        LL amin = infLL, bmin = infLL;

        for (int i = 0; i < n; i++) {
            cin >> arra[i];
            amin = min(amin, arra[i]);
        }
        for (int i = 0; i < n; i++) {
            cin >> arrb[i];
            bmin = min (bmin, arrb[i]);
        }
        LL ans = 0;
        // cout << amin << " " << bmin << endl;

        for (int i = 0; i < n; i++) {
            int tempa = arra[i] - amin;
            int tempb = arrb[i] - bmin;
            ans += min (tempa, tempb);
            ans += max(tempa, tempb) - min(tempa, tempb);
        }
        cout << ans << endl;
    }
    return 0;
}