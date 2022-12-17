#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int t = 0;

    while (1) {
        int n;  cin >> n;

        if (n == 0) break;

        int arr[n];
        int sum = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
        int avg = sum / n;

        sort (arr, arr + n);

        int j = 0;

        while (arr[j] < avg) {
            ans += avg - arr[j];
            j++;
        }

        cout << "Set #" << ++t << endl;
        cout << "The minimum number of moves is " << ans << "." << endl;
        cout << endl;
    }

    return 0;
}