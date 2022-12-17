#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    long long n;    cin >> n;
    long long arr[n];
    int count = 1;
    int max = 1;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            count ++;
            if (count > max) max = count;
        }
        else count = 1;
    }
    cout << max << endl;
    return 0;
}