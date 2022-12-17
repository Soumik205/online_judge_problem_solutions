#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll n, m;    cin >> n >> m;
    ll total = n * n;
    set < ll > row;
    set < ll > col;
    
    for (int i = 0; i < m; i++) {
        ll x, y;    cin >> x >> y;
        row.insert(x);
        col.insert(y);

        ll ans = (n - row.size()) * (n - col.size());
        cout << ans << endl;
    }
    return 0;
}