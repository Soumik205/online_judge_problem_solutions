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
        LL n, m;   cin >> n >> m;
        if (n < m) swap(n, m);
        if (n == 1 && m == 1) cout << 0 << endl;
        else cout << m + m + n - 2 << endl;
    }
    return 0;
}
 