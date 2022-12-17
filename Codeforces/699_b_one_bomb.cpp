#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll n, m;    cin >> n >> m;
    char arr[n][m];
    ll wall = 0;
    ll row[n];
    ll col[m];
    memset (row, 0, sizeof (row));
    memset (col, 0, sizeof (col));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == '*') {
                wall++;
                row[i]++;
                col[j]++;
            }

        }
    }

    /*cout << wall << endl;
    for (int i = 0; i < n; i++) {
        cout << row[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < m; i++) {
        cout << col[i] << " ";
    }
    cout << endl;*/

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ll count = row[i] + col[j];
            if (arr[i][j] == '*') count--;
            if (count == wall) {
                cout << "YES" << endl;
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}