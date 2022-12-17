#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < long long, long long > pairs;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll n, m;    cin >> n >> m;
    ll size = max (n, m) + 1;
    ll count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if ((i * i + j == n) and (i + j * j == m)) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
