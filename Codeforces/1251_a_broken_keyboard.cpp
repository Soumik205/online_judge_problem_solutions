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


/************************************* END OF ansLATE *************************************/

int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        //freopen ("out.txt", "w", stdout);
    #endif
    //optimize();

    int test;   cin >> test;
    while (test--) {
        string s;   cin >> s;
        int size = s.size();
        bool ok[26] = {false};

        //if (ok[5]) cout << "yes" << endl;

        for (int i = 0; i < size; i++) {
            int temp = s[i] - 'a';
            //cout << temp << endl;
            if (i < size - 1) {
                if (s[i] == s[i + 1]) {
                    i++;
                }
                else ok[s[i] - 'a'] = true;
            }
            else ok[temp] = true;
        }

        /*for (int i = 0; i < 26; i++) {
            if (ok[i]) cout << "true" << endl;
            else cout << "false" << endl;
        }*/

        for (int i = 0; i < 26; i++) {
            if (ok[i]) {
                char ans = 'a' + i;
                cout << ans;
            }
        }
        cout << endl;
    }
    return 0;
}
