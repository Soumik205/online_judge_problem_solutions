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

int arr[10] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
int a, b;

bool check (int prob) {
	int i = 0;
	int sum = b;
	while (i < prob) {
		sum -= arr[i];
		i++;
	}
	if (sum < 0) return 0;
	else return 1;
}

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen ("in.txt", "r", stdin);
        //freopen ("out.txt", "w", stdout);
    #endif
    //optimize();

    cin >> a >> b;
    b = 240 - b;

    int low = 0; 
    int high = a;
    int mid;
    int ans = 0;

    while (low <= high) {
    	mid = low + (high - low) / 2.0;

    	if (check(mid)) {
    		ans = max (ans, mid);
    		low = mid + 1;
    	}
    	else high = mid - 1;
    }

    cout << ans << endl;
    return 0;
}