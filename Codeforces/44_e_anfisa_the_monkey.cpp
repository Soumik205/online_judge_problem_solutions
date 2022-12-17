#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll k, a, b;     cin >> k >> a >> b;
    string s;   cin >> s;
    ll size = s.size();

    if (size < a * k or size > b * k) {
        cout << "No solution" << endl;
        return 0;
    }

    ll arr[k];
    memset (arr, 0, sizeof (arr));
    ll count = size;
    ll w = 0;
    while (count) {
        if (w == (k)) w = 0;
        arr[w]++;
        w++;
        count--;
    }

    ll mark = 0;
    for (int i = 0; i < k; i++) {
        for (int j = mark; j < mark + arr[i]; j++) {
            cout << s[j];
        }
        cout << endl;
        mark += arr[i];
    }
    return 0;
}
