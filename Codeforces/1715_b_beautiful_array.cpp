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
        LL n, k, b, s;  cin >> n >> k >> b >> s;

        LL temp1 = k * b;
        LL temp2 = temp1 + (n * (k - 1));

        if (s < temp1 || s > temp2) {
            cout << "-1" << endl;
            continue;
        }

        vector < LL > ans (n, 0);
        ans[0] = temp1;
        s -= temp1;
        for (int i = 0; i < n; i++) {
            LL pos = s;
            pos = min (pos, k - 1);
            ans[i] += pos;
            s -= pos;
        }

        for (auto x : ans) cout << x << " ";
        cout << endl;
    }
    return 0;
}