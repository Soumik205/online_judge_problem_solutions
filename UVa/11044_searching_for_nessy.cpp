#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int test;   cin >> test;

    while (test--) {
        double n, m;   cin >> n >> m;

        n -= 2;
        m -= 2;

        //cout << n << " " << m << endl;

        n = ceil (n / 3);
        m = ceil (m / 3);

        //cout << n << " " << m << endl;

        int ans = n * m;
        cout << ans << endl;
    }
    return 0;
}