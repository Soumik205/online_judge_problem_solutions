#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;  cin >> n;
    int size = n / 2;
    int ans = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < size; j++) {
            cout << ans <<  " " << (n * n) - ans + 1 << " ";
            ans++;
        }
        cout << endl;
    }

    return 0;
}