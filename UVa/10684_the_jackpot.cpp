#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < long long, long long > pairs;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    while (true) {
        ll n;   cin >> n;
        if (n == 0) return 0;

        vector < ll > v;
        for (int i = 0; i < n; i++) {
            ll temp;    cin >> temp;
            v.push_back(temp);
        }

        ll total = 0;
        ll count = 0;
        for (int i = 0; i < n; i++) {
            count += v[i];
            if (count > total) total = count;
            if (count < 0) count = 0;
        }
        if (total > 0) cout << "The maximum winning streak is " << total << ".\n";
        else cout << "Losing streak.\n";
    }
    return 0;
}
