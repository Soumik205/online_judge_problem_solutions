#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;

    while ( (scanf ("%d", &n)) != EOF) {
        int arr[n];
        int diff[n - 1];

        memset (arr, 0, sizeof arr);
        memset (diff, 0, sizeof diff);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        } 

        for (int i = 0; i < n - 1; i++) {
            diff[i] = abs(arr[i + 1] - arr[i]);
        }

        sort(diff, diff + (n - 1));
        int sum = 0;

        for (int i = 0; i < n - 1; i++) {
            if (diff[i] != i + 1) sum++;
        }

        if (sum == 0) cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
        
    }

    return 0;
}