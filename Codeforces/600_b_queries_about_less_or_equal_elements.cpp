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

inline LL gcd(LL a, LL b) {return __gcd(a, b);}


/************************************* END OF TEMPLATE *************************************/

VL v;
VL u;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    //optimize();

    LL n, m;	cin >> n >> m;
    for (LL i = 0; i < n; i++) {
    	LL temp;	cin >> temp;
    	v.pb(temp);
    }

    for (LL i = 0; i < m; i++) {
    	LL temp; 	cin >> temp;
    	u.pb(temp);
    }

    sort(all(v));
    VL ans;

    for (LL i = 0; i < m; i++) {
    	LL value = u[i];
    	LL low = 0; 
    	LL high = n;
    	LL mid;
    	bool flag = false;

    	while (low <= high) {
    		mid = low + (high - low) / 2.0;

    		if (v[mid] <= value) {
    			if (v[mid + 1] > value) {
    				ans.pb(mid + 1);
    				flag = true;
    				break;
    			}
    			else if (mid == n -1) {
    				ans.pb(mid + 1);
    				flag = true;
    				break;
    			}
    			else low = mid + 1;
    		}
    		else high = mid - 1;
    	}
    	if (!flag) ans.pb(0);
    }

    int size = ans.size();
    if (size == 0) {
    	cout << "0" << endl;
    	return 0;
    }
    for (int i = 0; i < size; i++) cout << ans[i] << " ";
    cout << endl;
	return 0;
}