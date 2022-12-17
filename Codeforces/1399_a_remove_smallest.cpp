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



LL gcd (LL a, LL b) { return b == 0 ? a : gcd (b, a % b); }
LL lcm (LL a, LL b) { return a * (b / gcd (a, b)); }

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const LL infLL = 9000000000000000000;

/************************************* END OF TEMPLATE *************************************/


#define MX 100005
int arr[MX];
int n, k, z;    
LL ans;
// flag true means right e jabo just
void calc (bool flag, int ops, int left, int idx, LL count) {
    if (ops == 0) {
        ans = max (count, ans);
        return;
    }
    
    if (flag) {
        count += arr[idx];
        idx++;
        ops--;
        flag = false;
        calc(false, ops, left, idx, count);
    }
    else {
        if (idx > 0 && idx < n - 1) {
            if (arr[idx + 1] < arr [idx - 1] && left) {
                count += arr[idx];
                ops--;
                idx--;
                left--;
                flag = true;
                calc (flag, ops, left, idx, count);
                idx++, left++, flag = false;
                calc (flag, ops, left, idx, count);
            }
            else {
                count += arr[idx];
                ops--;
                idx++;
                flag = false;
                calc (flag, ops, left, idx, count);
            }
        }
    }
    if (ops == 1) {
        count += arr[idx];
        ans = max (ans, count);
        return;
    }
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    // optimize();

    LL test;   cin >> test;
    while (test--) {
        int n;  cin >> n;
        VI v;  
        for (int i = 0; i < n; i++) {
            int temp;   cin >> temp;
            v.push_back(temp);
        }
        if (n == 1) {
            cout << "YES" << endl;
        }
        else {
            sort (v.begin(), v.end());
            bool flag = true;
            for (int i = 0; i < n - 1; i++) {
                if (v[i + 1] - v[i] > 1) {
                    flag = false;
                    break;
                }
            } 
            if (flag) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        v.clear();
    }
    return 0;
}