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

// int dx[] = {1, 0, -1, 0}; // trick to explore an implicit 2D grid
// int dy[] = {0, 1, 0, -1};  // S,E,N,W neighbors

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

    int test;   cin >> test;
    while (test--) {
        int n;  cin >> n;
        int arr[n];
        int ev = 0, od = 0;
        for (int i = 0; i < n; i++) {
            int temp;   cin >> temp;
            if (temp & 1) od++;
            else ev++;
            arr[i] = temp;
        }
        // cout << ev << " " << od << endl;
        if (n & 1) {
            n--;
            if ((ev != (n / 2.0) + 1) && (od != (n / 2.0))) {
                cout << "-1" << endl;
                continue;
            }
            n++;
        }
        else {
            if ((ev != (n / 2.0)) && (od != (n / 2.0))) {
                cout << "-1" << endl;
                continue;
            }
            
        }
        // for (int i = 0; i < n; i++) cout << arr[i] << " ";
        // cout << endl;
        int ans = 0;
        for (int i = 0; i < n; i += 2) {
            if (arr[i] & 1) {
                // cout << arr[i] << endl;
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}