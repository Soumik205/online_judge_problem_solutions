#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll n;   cin >> n;
    vector < pair < ll, ll > > v;

    for (int i = 0; i < n; i++) {
        ll a, b;    cin >> a >> b;
        v.push_back(make_pair(a, b));
    } 
    sort (v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ll tempA = v[i].first;
        ll tempB = v[i].second;

        if (ans <= tempB) {
            ans = tempB;
        }
        else {
            ans = tempA;
        }
    }
    cout << ans << endl;
    return 0;
}