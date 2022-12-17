#include <bits/stdc++.h>
using namespace std;

//typedefs
typedef long long LL;
typedef vector<int> VI;
typedef vector<LL> VL;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef pair<int, int> PII;
typedef pair<double, double> PDD;
typedef pair<LL, LL> PLL;
typedef vector<PII> VII;
typedef vector<PLL> VLL;

//#Defines
#define rep (i, a, b) for (i = a; i <= b; i++)
#define repR (i, a, b) for (i = a; i >= b; i--)
#define pb push_back
// #define pb emplace_back
#define F first
#define S second
//#define mp make_pair
#define all(c) c.begin(), c.end()
#define rev(c) c.rbegin(), c.rend()
#define endl '\n'
#define pf printf
#define sf scanf
#define MOD 1000000007
//#define harmonic(n) 0.57721566490153286l+log(n)
//if harmonic numbers need to be calculated, precalculate upto 1e6, then for any x > 1e6
//call harmonic(x + 0.5)
#define RESET(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const LL infLL = 9000000000000000000;

/************************************* END OF TEMPLATE *************************************/

int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);
#endif
    //optimize();

    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back(make_pair(x, y));
        }

        if (n > 1)
        {
            bool ok = false;
            for (int i = 1; i < n; i++)
            {
                int a = v[i - 1].F;
                int b = v[i - 1].S;
                int c = v[i].F;
                int d = v[i].S;

                if (a < b) {
                    ok = false;
                    break;
                }
                if (c < b) {
                    ok = false;
                    break;
                }

                if (c == a)
                {
                    if (d == b) {
                        if (d <= c) ok = true;
                        else {
                            ok = false;
                            break;
                        }
                    }
                        
                    else
                    {
                        ok = false;
                        break;
                    }
                }
                else if (c > a)
                {
                    if (d == b) {
                        if (d <= c) ok = true;
                        else {
                            ok = false;
                            break;
                        }
                    }
                    else if (d > b)
                    {
                        int t = c - a;
                        int t2 = d - b;
                        if (t >= t2)
                            ok = true;
                        else
                        {
                            ok = false;
                            break;
                        }
                    }
                    else
                    {
                        ok = false;
                        break;
                    }
                }
                else
                {
                    ok = false;
                    break;
                }
            }

            if (!ok)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
            v.clear();
        }
        if (n == 1) {
            if (v[0].F >= v[0].S) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}