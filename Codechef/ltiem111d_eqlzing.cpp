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
        int a, b;   cin >> a >> b;  
        int temp = abs(a - b);
        if (temp & 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}