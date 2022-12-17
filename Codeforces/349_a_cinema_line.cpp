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




int main() {
    #ifndef ONLINE_JUDGE
        //freopen ("in.txt", "r", stdin);
        //freopen ("out.txt", "w", stdout);
    #endif
    optimize();
    
    int n;  cin >> n;
    int twenty_five = 0;
    int fifty = 0;
    int hun = 0;

    while (n--) {
        int temp;   cin >> temp;
        if (temp == 25) twenty_five++;
        else if (temp == 50) {
            if (twenty_five == 0) {
                cout << "NO" << endl;
                return 0;
            }
            else {
                twenty_five--;
                fifty++;
            }
        }
        else if (temp == 100) {
            if (twenty_five < 1) {
                cout << "NO" << endl;
                return 0;
            }
            if (fifty < 1 and twenty_five < 3) {
                cout << "NO" << endl;
                return 0;
            }
            else {
                if (fifty >= 1 and twenty_five >= 1) {
                    fifty--;
                    twenty_five--;
                }
                else if (fifty < 1 and twenty_five >= 3) {
                    twenty_five -= 3;
                }
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}