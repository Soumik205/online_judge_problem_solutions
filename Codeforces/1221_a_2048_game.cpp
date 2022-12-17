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
    
    int test;   cin >> test;
    while (test--) {
        int n;  cin >> n;
        map < LL, LL > mp; 
        VL v;

        for (int i = 0; i < n; i++) {
            LL temp;    cin >> temp;
            //v.pb(temp);
            mp[temp]++;
        }

        for (auto it = mp.begin(); it != mp.end(); it++) {
            LL temp = (it -> S);
            LL value = (it -> F);
            while (temp > 1) {
                mp[value * 2]++;
                temp -= 2;
            }
        }

        bool flag = true;

        for (auto it = mp.begin(); it != mp.end(); it++) {
            if ((it -> F) == 2048) {
                cout << "YES" << endl;
                flag = false;
            } 
        }
        if (flag) cout << "NO" << endl;
    }
}