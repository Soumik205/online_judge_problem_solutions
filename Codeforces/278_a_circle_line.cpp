#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int count = 0;
    int n;  cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        count += arr[i];
    }

    int a, b;   cin >> a >> b;
    if (a > b) swap(a, b);
    int value = 0; 

    for (int i = a - 1; i <= b - 2; i++) value += arr[i];

    //cout << "count " << count << endl;
    //cout << "value " << value << endl;

    count = abs (count - value);
    cout << min (count, value) << endl;
    return 0;
}