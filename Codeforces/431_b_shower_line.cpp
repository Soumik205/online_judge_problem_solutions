#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int arr[5][5];
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> arr[i][j];
    }
    int ans = -1;
    int p[5];
    for (int i = 0; i < n; ++i) p[i] = i;

    do {
        int temp = 0;

        temp += arr [p[0]][p[1]] + arr [p[1]][p[0]];
        temp += arr [p[2]][p[3]] + arr [p[3]][p[2]];

        temp += arr [p[1]][p[2]] + arr [p[2]][p[1]];
        temp += arr [p[3]][p[4]] + arr [p[4]][p[3]];

        temp += arr [p[2]][p[3]] + arr [p[3]][p[2]];
        temp += arr [p[4]][p[3]] + arr [p[3]][p[4]];

        ans = max (ans, temp);
    }
    while (next_permutation (p, p + n));

    cout << ans << endl;
    return 0;
}