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

#define MX 100000007

LL total = 0;
LL bottle = 0;
LL n;
VL v;

bool check (LL capacity) { 
	LL sum = 0;
	LL count = 1;
	LL i = 0;

	while (i < n) {
		if (v[i] > capacity) return 0;
		if (v[i] + sum <= capacity) {
			sum += v[i];
			i++;
		}
		else {
			if (count == bottle && i < n) return 0;
			sum = 0;
			count++;
		}
	}
	if (count == bottle && i < n) return 0;
	return 1;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    //optimize();


    while (cin >> n >> bottle) {
    	LL maxx = 0;
    	for (int i = 0; i < n; i++) {
    		int temp;	cin >> temp;
    		v.pb(temp);
    		if (temp > maxx) maxx = temp;
    		total += temp;
    	}

    	LL ans = 0;
    	LL low = maxx;
    	LL high = infLL;
    	LL mid;

    	while (low <= high) {
    		mid = low + (high - low) / 2.0;

    		if (check(mid)) {
    			ans = mid;
    			high = mid - 1;
    		}
    		else low = mid + 1;
    	}

    	cout << ans << endl;
    	v.clear();
    }
}