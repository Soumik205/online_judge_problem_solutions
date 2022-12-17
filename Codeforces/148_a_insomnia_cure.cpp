#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int k, l, m, n, d;  cin >> k >> l >> m >> n >> d;
    int arr[d];
    memset (arr, 0, sizeof arr);
    int count = 0;

    for (int i = 0; i < d; i++) {
        if (arr[i] != 1) {
            if ((i + 1) % k == 0) arr[i] = 1;
            if ((i + 1) % l == 0) arr[i] = 1;
            if ((i + 1) % m == 0) arr[i] = 1;
            if ((i + 1) % n == 0) arr[i] = 1;
        }
    }

    for (int i = 0; i < d; i++) {
        if (arr[i] == 1) count++;
    }

    cout << count << endl;
    return 0;
}