#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", 'w', stdout);

    int n;  cin >> n;
    int arr[n];
    memset(arr, 0, sizeof arr);
    int count = 0;
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] == 0) {
            if(arr[i - 1] == 1 and arr[i + 1] == 1) {
                arr[i + 1] = 0;
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}