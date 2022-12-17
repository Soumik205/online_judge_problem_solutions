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

    int test;   cin >> test;
    while (test--) {
        int n;  cin >> n;
        VI v, w;
        int sum1 = 0, sum2 = 0;
        stack < int > plus, minus;
        for (int i = 0; i < n; i++) {
            int temp;   cin >> temp;
            v.push_back(temp);
            sum1 += temp;
        }
        for (int i = 0; i < n; i++) {
            int temp;   cin >> temp;
            w.push_back(temp);
            sum2 += temp;
        }
        if (sum1 != sum2) cout << "-1" << endl;
        else {
            for (int i = 0; i < n; i++) {
                int temp = v[i] - w[i];
                if (temp > 0) {
                    while (temp--) {
                        plus.push(i + 1);
                    }
                }
                else {
                    while (temp++) {
                        minus.push(i + 1);
                    }
                }
            }
            cout << plus.size() << endl;
            while (!plus.empty()) {
                cout << plus.top() << " " << minus.top() << endl;
                plus.pop();
                minus.pop();
            }
        }
    }    
    return 0;
}