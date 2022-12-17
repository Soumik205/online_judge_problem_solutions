#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    double n, t;    cin >> n >> t;
    vector < pair <double, double> > v;

    for (int i = 0; i < n; i++) {
        double x, a;    cin >> x >> a;
        v.push_back(make_pair(x, a));
    }

    sort (v.begin(), v.end());

    ll ans = 2;
    for (int i = 0; i < n - 1; i++) {
        double temp = abs ((v[i + 1].first - v[i + 1].second / 2) - (v[i].first + v[i].second / 2));

        if (temp > t) ans += 2;
        if (temp - t == 0.0) ans++;
    }

    cout << ans << endl;
    return 0;
}