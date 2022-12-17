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
        int n;  cin >> n;
        if (n & 1) {
            cout << "1 ";
            for (int i = 2; i + 1 <= n; i += 2) cout << i + 1 << " " << i << " ";
        }
        else {
            for (int i = 2; i <= n; i += 2) cout << i << " " << i - 1 << " ";
        }
        cout << endl;
    }
    return 0;
}