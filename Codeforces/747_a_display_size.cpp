#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll n;   cin >> n;
    ll start = floor (sqrt(n));

    while (1) {
        if (n % start == 0) {
            cout << start << " " << n / start << endl;
            return 0;
        }
        else start--;
    }
}