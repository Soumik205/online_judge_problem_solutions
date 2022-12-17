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

int main() {
    #ifndef ONLINE_JUDGE
        //freopen ("in.txt", "r", stdin);
        //freopen ("out.txt", "w", stdout);
    #endif
    //optimize();
    
    LL n;   cin >> n;
    int maxx = 0;
    int minn = 2000000000;
    int max_id = 0;
    int min_id = 105;
    VI v;

    for (int i = 0; i < n; i++) {
        int temp;   cin >> temp;
        v.pb(temp); 
        if (temp > maxx) {
            maxx = max(temp, maxx);
            max_id = i;
        }
        if (temp < minn) {
            minn = temp;
            min_id = i;
        }
    }

    if (max_id - min_id > 0) {
        int temp1 = min_id - 0;
        int temp2 = (n - 1) - max_id;
        if (temp1 > temp2) {
            swap(v[0], v[min_id]);
        }
        else {
            swap(v[n - 1], v[max_id]);
        }
    }
    else {
        int temp1 = max_id - 0;
        int temp2 = (n - 1) - min_id;
        if (temp1 > temp2) {
            swap(v[0], v[max_id]);
        }
        else {
            swap(v[n - 1], v[min_id]);
        }
    }

    maxx = 0;
    minn = 2000000000;
    max_id = 0;
    min_id = 105;

    for (int i = 0; i < v.size(); i++) {
        int temp = v[i];
        if (temp > maxx) {
            maxx = temp;
            max_id = i;
        }
        if (temp < minn) {
            minn = temp;
            min_id = i;
        }
    }

    cout << abs(max_id - min_id)<< endl;
    return 0;
}