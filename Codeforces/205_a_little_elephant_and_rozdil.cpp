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
    ll loc = 0;
    ll minimum = 10000000009;

    for (int i = 0; i < n; i ++) {
        ll temp;    cin >> temp;
        v.push_back (temp);
        if (temp < minimum) {
            minimum = temp;
            loc = i + 1;
        }
    }

    sort (v.begin(), v.end());

    if (n > 1 and (v[0] == v[1])) {
        cout << "Still Rozdil" << endl;
        return 0;
    }
    else cout << loc << endl;
    return 0;
}
