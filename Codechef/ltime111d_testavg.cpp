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
        int a, b, c;    cin >> a >> b >> c;
        if (((a + b) / 2.0 < 35) || ((a + c) / 2.0 < 35) || ((b + c) / 2.0 < 35)) cout << "FAIL" << endl;
        else cout << "PASS" << endl; 
    }
    return 0;
}