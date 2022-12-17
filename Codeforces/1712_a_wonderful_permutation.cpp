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
        int n, k;   cin >> n >> k;
        vector < int > v(n);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (i < k && v[i] > k) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}