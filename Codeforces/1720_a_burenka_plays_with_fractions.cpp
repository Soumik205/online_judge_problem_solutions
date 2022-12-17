#include<bits/stdc++.h>
using namespace std;
 
typedef long long LL;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    
    int test;   cin >> test;
    while (test--) {
        LL a, b, c, d;  cin >> a >> b >> c >> d;
        LL x = a * d;
        LL y = b * c;

        if (x == y) cout << "0" << endl;
        else if (y != 0 && x % y == 0 || x != 0 && y % x == 0) cout << "1" << endl;
        else cout << "2" << endl;
    }
    return 0;
}
