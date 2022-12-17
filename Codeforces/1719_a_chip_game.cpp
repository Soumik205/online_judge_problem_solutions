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
        LL n, m;    cin >> n >> m;
        if (n & 1 && m & 1) cout << "Tonya" << endl;
        else if (n % 2 == 0 && m % 2 == 0) cout << "Tonya" << endl;
        else cout << "Burenka" << endl;
    }
    return 0;
}
 