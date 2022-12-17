#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;  cin >> n;
    double arr[200005];
    memset (arr, 0, sizeof arr);
    long long sum = 0;
    long long count = 0;
    vector < int > v;
    int size = n - 1;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    for (int i = 0; i < n; i++) {
        double temp = (sum - arr[i]) / size;

        if (temp == arr[i]) {
            count ++;
            v.push_back(i + 1);
        }
    }

    sort(v.begin(), v.end());
    cout << count << endl;

    if (count > 0) {
        for (int i = 0; i < count; i++) {
            cout << v[i] << " ";
        }
    }

    cout << endl;
    return 0;
}