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
        VI v;
        for (int i = 0; i < n; i++) {
            int temp;   cin >> temp;
            v.push_back(temp);
        }
        bool check = false;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] > v[i + 1]) check = true;
        }
        if (!check) {
            cout << 0 << endl;
        }
        else {
            int iter = 0;
            bool flag = false;
            int start = 0;
            bool ok = false;
            while (!flag) {
                flag = true;
                check = false;
                for (int i = 0; i < n - 1; i++) {
                    if (v[i] > v[i + 1]) check = true;
                }
                if (check) {
                    iter++;
                }
                for (int i = start; i < n - 1; i += 2) {
                    if (v[i] > v[i + 1]) {
                        swap (v[i], v[i + 1]);
                        flag = false;
                    }
                }
                ok = false;
                start = 1;
                check = false;
                for (int i = 0; i < n - 1; i++) {
                    if (v[i] > v[i + 1]) check = true;
                }
                if (check) {
                    iter++;
                }
                for (int i = start; i < n - 1; i += 2) {
                    if (v[i] > v[i + 1]) {
                        swap (v[i], v[i +1]);
                        flag = false;
                    }
                }
                start = 0;
                ok = false;
            }
            cout << iter << endl;
        }
        
    }    
    return 0;
}