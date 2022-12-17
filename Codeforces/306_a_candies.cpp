#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll n, m;    cin >> n >> m;
    ll arr[m];
    memset(arr, 0, sizeof (arr));
    ll i = 0;
    while (n) {
        if (i == (m)) i = 0;
        arr[i]++;
        i++;
        n--;
    }
    
    for (int i = 0; i < m; i++) {
        cout << arr[i];
        if (i != (m - 1)) cout << " ";
    }
    cout << endl;
    return 0;
}