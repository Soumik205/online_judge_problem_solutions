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

const int MX = 25;
char adj[MX][MX];
int row, col;
LL ans = 0;

void dfs (int i, int j) {
	if (i < 0 || i >= row || j < 0 || j >= col) return;
	else if (adj[i][j] == '.') {
		adj[i][j] ='#'; 
		ans++;
	}
    else if (adj[i][j] =='#') return;
	dfs (i, j + 1);
	dfs (i, j - 1);
	dfs (i + 1, j);
	dfs (i - 1, j);
}


int main()
{
    #ifndef ONLINE_JUDGE
        //freopen ("in.txt", "r", stdin);
        //freopen ("out.txt", "w", stdout);
    #endif
    //optimize();

    int test;	cin >> test;
    int t = 0;
    while (test--) {
    	ans = 1;
    	RESET (adj, 0);

    	cin >> col >> row;
    	for (int i = 0; i < row; i++) {
    		for (int j = 0; j < col; j++) cin >> adj[i][j];
    	}

    	/*for (int i = 0; i < row; i++) {
    		for (int j = 0; j < col; j++) cout << adj[i][j] << " ";
    		cout << endl;
    	}*/

    	bool flag = false;
    	for (int i = 0; i < row; i++) {
    		for (int j = 0; j < col; j++) {
    			if (adj[i][j] == '@') {
    				dfs(i, j);
    				break;
    				flag = true;
    			}
    		}
    		if (flag) break;
    	}

    	cout << "Case " << ++t << ": " << ans << endl;
    }
    return 0;
}