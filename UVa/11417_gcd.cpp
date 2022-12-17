#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int gcd (ll a, ll b) {
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    return a;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    while (1) {
        ll n;  cin >> n;
        if (n == 0) return 0;

        ll count = 0;
        for (ll i = 1; i < n; i++) {
            for (ll j = i + 1; j <= n; j++) count += gcd (i, j);
        }
        cout << count << endl; 
    }
    return 0;
}