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
#define RESET(a, b)	memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const LL infLL = 9000000000000000000;
 
 
/************************************* END OF TEMPLATE *************************************/

#define MX 1000006
LL n, k;
string s;
int arra[MX];
int arrb[MX];

int solve (LL a) {
    for (int i = 0; i < n - a + 1; i++) {
        string temp = s.substr(i, a);
        LL start = i + 1;
        LL end = i + a;

        LL noa = arra[end] - arra[start - 1];
        LL nob = arrb[end] - arrb[start - 1];
        
        if ((noa - k <= 0) or (nob - k <= 0)) return true;
    }
    return false;
}

int main() {
    #ifndef ONLINE_JUDGE
        //freopen ("in.txt", "r", stdin);
        //freopen ("out.txt", "w", stdout);
    #endif
    //optimize();
    
    cin >> n >> k;
    cin >> s;
    RESET (arra, 0);
    RESET (arrb, 0);

    LL size = s.size();
    LL counta = 0, countb = 0;
    for (int i = 0; i < size; i++) {
        if (s[i] == 'a') counta++;
        else countb++;
        arra[i + 1] = counta;
        arrb[i + 1] = countb;
    }

    LL low = 0;
    LL high = n;
    LL ans;

    while (low <= high) {
        LL mid = (low + high) / 2.0;

        if (solve(mid)) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}