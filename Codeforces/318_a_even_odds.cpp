#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    long long n, k;     cin >> n >> k;
    long long a = ceil (n / 2.0);

    if (a >= k) cout << 2 * k - 1 << endl;
    else cout << (k - a) * 2 << endl;
    return 0;
}