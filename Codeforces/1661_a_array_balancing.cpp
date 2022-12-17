#include <bits/stdc++.h>
using namespace std;

//typedefs
typedef long long LL;


int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    // optimize();
    
    int test;   cin >> test;
    while (test--) {
        int n;  cin >> n;
        vector < long long > a, b;
        for (int i = 0; i < n; i++) {
            int temp;   cin >> temp;
            a.push_back(temp);
        }
        for (int i = 0; i < n; i++) {
            int temp;   cin >> temp;
            b.push_back(temp);
        }

        for (int i = 0; i < n - 1; i++) {
            LL temp1 = abs(a[i + 1] - a[i]) + abs(b[i + 1] - b[i]);
            LL temp2 = abs(b[i + 1] - a[i]) + abs(a[i + 1] - b[i]);
            if (temp2 < temp1) {
                swap(a[i + 1], b[i + 1]);
            }
        }
        // for (int i = 0; i < n; i++) {
        //     cout << a[i] << " "  << b[i] << endl;
        // }

        LL ans = 0;
        for (int i = 0; i < n - 1; i++) {
            LL temp1 = abs(a[i + 1] - a[i]);
            LL temp2 = abs(b[i + 1] - b[i]);
            ans += temp1 + temp2;
        }
        cout << ans << endl;
    }
    return 0;
}