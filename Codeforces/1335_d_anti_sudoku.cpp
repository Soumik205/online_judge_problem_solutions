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
        int arr[10][10];
        /* for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) cin >> arr[i][j];
        } */

        int index = 0;
        for (int k = 0; k < 9; k++) {
            string temp;    cin >> temp;
            for (int i = 0; i < 9; i++) arr[index][i] = temp[i] - '0';
            index++;
        }

        if (arr[0][6] == 1) arr[0][6] = 2;
        else arr[0][6] = 1;

        if (arr[1][1] == 1) arr[1][1] = 2;
        else arr[1][1] = 1;

        if (arr[2][5] == 1) arr[2][5] = 2;
        else arr[2][5] = 1;

        if (arr[3][8] == 1) arr[3][8] = 2;
        else arr[3][8] = 1;

        if (arr[4][2] == 1) arr[4][2] = 2;
        else arr[4][2] = 1;

        if (arr[5][4] == 1) arr[5][4] = 2;
        else arr[5][4] = 1;

        if (arr[6][7] == 1) arr[6][7] = 2;
        else arr[6][7] = 1;

        if (arr[7][0] == 1) arr[7][0] = 2;
        else arr[7][0] = 1;

        if (arr[8][3] == 1) arr[8][3] = 2;
        else arr[8][3] = 1;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) cout << arr[i][j];
            cout << endl;
        }
    }
    return 0;
}