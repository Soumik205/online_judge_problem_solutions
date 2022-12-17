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

    int test;   cin >> test;
    int a, b, c;    
    for (int i = 0; i < test; i++) {
        cin >> a >> b >> c;
        int ans = 0;
        if (a > 0) {
            ans++;
            a--;
        }
        if (b > 0) {
            ans++;
            b--;
        }
        if (c > 0) {
            ans++;
            c--;
        }
        //cout << a << " " << b << " " << c << endl;
        bool flag = true;
        if ((a == 1 && b == 1 && c > 1)|| (a > 1 && b == 1 && c == 1) || (a == 1 && c == 1 && b > 1)) {
            ans += 2;
            if (a == 1) a--;
            if (b == 1) b--;
            if (c == 1) c--;
            flag = false;
        }
        if (flag) {
            if (a > 0 && b > 0) {
                ans++;
                a--;
                b--;
            }
            if (b > 0 && c > 0) {
                ans++;
                b--;
                c--;
            }
            if (c > 0 && a > 0) {
                ans++;
                a--;
                c--;
            }
        }
        if (a > 0 && b > 0 && c > 0) {
            ans++;
        }

        cout << ans << endl;
    }
    return 0;
}
