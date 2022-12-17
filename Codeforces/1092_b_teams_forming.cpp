#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < long long, long long > pairs;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll n;   cin >> n;
    vector < ll > v;
    for (int i = 0; i < n; i++) {
        ll temp;    cin >> temp;
        v.push_back(temp);
    }
    sort (v.begin(), v.end());
    ll count = 0;

    for (int i = 0; i < n; i += 2) {
        if (v[i] != v[i + 1]) {
            ll temp = v[i + 1] - v[i];
            count += temp;
        }
    }
    cout << count << endl;
    return 0;
}