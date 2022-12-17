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

#define MX 100005

int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    //optimize();

    LL n;
    while (cin >> n) {
    	VI v;
    	VLL ans;
    	for (LL i = 0; i < n; i++) {
    		LL temp;	cin >> temp;
    		v.pb(temp);
    	}
    	sort(all(v));

    	LL money;	cin >> money;

    	for (LL i = 0; i < n; i++) {
    		LL temp = v[i];
    		LL value = money - v[i];

    		LL low = i + 1;
    		LL high = n - 1;
    		LL mid;
    		while (low <= high) {
    			mid = low + (high - low) / 2.0;

    			if (v[mid] == value) {
    				if (temp > value) swap(temp, value);
    				ans.pb(mp(temp, value));
    				break;
    			}
    			else {
    				if (v[mid] > value) high = mid - 1;
    				else low = mid + 1;
    			}
    		} 
    	}

    	sort(rev(ans));
    	cout << "Peter should buy books whose prices are " << ans[0].F << " and " << ans[0].S << ".\n\n";

    	ans.clear();
    	v.clear();
    }
    return 0;
}