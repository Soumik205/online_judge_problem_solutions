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



int arr[21];
int dp[22][4010];
int n;
int total;

bool knapsack (int i, int weight) {
    if (i == n) return weight * 2 == total;
    if (dp[i][weight] != -1) return dp[i][weight];
    bool ans = false;
    bool ans1 = knapsack (i + 1, weight + arr[i]);
    bool ans2 = knapsack (i + 1, weight);
    return ans = ans1 or ans2;
}


int main() {
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    optimize();
    
    int test;    cin >> test;
    string s;
    stringstream ss;
    int val, j;
    getline(cin, s);

    while (test--) {
        RESET (dp, -1);
        //RESET (arr, 0);

        getline (cin, s);
        ss.clear();
        ss << s; //compying from s to stringstream
        total = 0;
        n = 0;
        while (ss >> val) { //reading from stringstream to data
            arr[n] = val;
            total += val;
            n++;
        }

        bool ans = knapsack(0, 0);
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}