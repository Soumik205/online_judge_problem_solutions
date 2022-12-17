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

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const LL infLL = 9000000000000000000;


/************************************* END OF TEMPLATE *************************************/

int main()
{
    #ifndef ONLINE_JUDGE
         freopen ("in.txt", "r", stdin);
        // freopen ("out.txt", "w", stdout);
    #endif
    //optimize();

    int test;   cin >> test;
    for (int n = 0; n < test; n++) {
        int bp, tp, money;  cin >> bp >> tp >> money;
        string s;   cin >> s;
        int size = s.size();
        VI v;
        VI v2;
        VI trace;
        LL count = 1;

        int buff = 0;
        if (s[0] == 'A') buff = bp;
        else if (s[0] == 'B') buff = tp;

        for (int i = 1; i < size - 1; i++) {
            if (s[i] != s[i - 1]) {
                v.pb(buff);
                trace.pb(count + 1);
                count = 0;
                buff = 0;
                if (s[i] == 'A') buff = bp;
                else if (s[i] == 'B') buff = tp;
            }
            else {
                count++;
            }
        }
        trace.pb(count + 1);

        // for (int i = 0; i < trace.size(); i++) cout << trace[i] << " ";
        // cout << endl;

        v.pb(buff);
        LL total = 0;
        LL extra = 0;
        for (int i = 0; i < v.size(); i++) v2.pb(v[i]);
        reverse (v2.begin(), v2.end());

        // for (int i = 0; i < v2.size(); i++) cout << v2[i] << " ";
        // cout << endl;

        for (int i = 0; i < v.size(); i++) total += v[i];
        // cout << total << endl;

        LL temp = 0;
        for (int i = 0; i < v2.size(); i++) {
            if (money - v2[i] >= 0) {
                money -= v2[i];
                temp += v2[i];
            }
            else break;
        }
        LL remaining = total - temp;
        // cout << remaining << endl;

        LL count_nof_v = 0;
        for (int i = 0; i < v.size(); i++) {
            if (remaining - v[i] >= 0) {
                count_nof_v++;
                remaining -= v[i];
            }
            else break;
        }
        // cout << count_nof_v << endl;

        LL ans = 0;
        for (int i = 0; i < count_nof_v; i++) ans += trace[i];
        if (ans == 0) ans = 1;
        cout << ans << endl;
        v.clear();
    }
    return 0;
}


/*
5
2 2 1
BB
1 1 1
AB
3 2 8
AABBBBAABB
5 3 4
BBBBB
2 1 1
ABABAB
*/
