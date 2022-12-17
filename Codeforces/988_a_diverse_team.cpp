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

int main()
{
    #ifndef ONLINE_JUDGE
        //freopen ("in.txt", "r", stdin);
        //freopen ("out.txt", "w", stdout);
    #endif
    //optimize();

	int n, k;	cin >> n >> k;
	int arr[n + 5];
	RESET (arr, 0);
	set < int > s;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		s.insert (arr[i]);
	}

	if (s.size() < k) {
		cout << "NO" << endl;
		return 0;
	}
	else cout << "YES" << endl;
	int count = 0;
	VI v;

	for (auto it = s.begin(); it != s.end(); it++) {
		if (count < k) {
			v.pb(*it);
			count++;
		}
	}
	int j = 0;
	int i = 0;

	while (k) {
		if (arr[i] == v[j]) {
			cout << i + 1 << " ";
			i = 0;
			k--;
			j++;
		}
		if (i < n - 1) i++;
		else i = 0;
	}
	cout << endl;
	return 0;
}