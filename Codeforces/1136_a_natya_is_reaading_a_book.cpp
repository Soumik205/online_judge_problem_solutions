#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;  cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp >> arr[i];
    }

    int test;   cin >> test;

    for (int i = 0; i < n; i ++) {
        if (arr[i] >= test) {
            int ans = n - i;
            cout << ans << endl;
            return 0;
        }
    }
}