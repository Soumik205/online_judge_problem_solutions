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


/************************************* END OF TEMPLATE *************************************/


int main() {
    #ifndef ONLINE_JUDGE
        //freopen ("in.txt", "r", stdin);
        //freopen ("out.txt", "w", stdout);
    #endif
    //optimize();
 
    long double x1, y1, r1, x2, y2, r2;      cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    long double d = sqrt(sqr(y2-y1) + sqr(x2-x1));
    long double ans;

    if (d > (r1 + r2)) ans = 0;
    else if (d <= abs(r1 - r2) && r1 >= r2) ans = PI * sqr(r2);
    else if (d <= abs(r1 - r2) && r2 > r1) ans = PI * sqr(r1);
    else {
        long double phi = (acos((sqr(d) + sqr(r1) - sqr(r2)) / (2 * r1 * d))) * 2;
        long double theta = (acos((sqr(d) + sqr(r2) - sqr(r1)) / (2 * r2 * d))) * 2;
        long double area1 = 0.5 * theta * sqr(r2) - 0.5 * sqr(r2) * sin(theta);
        long double area2 = 0.5 * phi * sqr(r1) - 0.5 * sqr(r1) * sin(phi);
        ans = area1 + area2;
    }
	cout << fixed << setprecision(20) << ans << endl;
  	return 0;
}