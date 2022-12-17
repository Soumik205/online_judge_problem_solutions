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
    while (test--) {
        int n, m;   cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        int brr[m];
        for (int i = 0; i < m; i++) cin >> brr[i];

        set < int, greater < int > > s;

        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                    s.insert (j + 1);
                }
            }
        }
        // for (int i = 0; i < m; i++) cout << brr[i] << " ";
        // cout << endl;
        // for (auto& it : s) cout << it << " ";
        // cout << endl;
        
        bool ghapla = false;
        bool flag = false;

        for (auto& it : s) {
            for (int i = 0; i < m; i++) {
                if (it != brr[i]) ghapla = true;
                else {
                    ghapla = false;
                    break;
                }
            }
            if (ghapla == true) flag = true;
        }
        if (flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}


/*
6
3 2
3 2 1
1 2

4 2
4 1 2 3
3 2

5 1
1 2 3 4 5
1

4 2
2 1 4 3
1 3

4 2
4 3 2 1
1 3

5 2
2 1 2 3 3
1 4
*/