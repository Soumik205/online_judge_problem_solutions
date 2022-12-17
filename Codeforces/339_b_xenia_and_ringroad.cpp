#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n, m;   cin >> n >> m;
    int prev = 1;
    long long count = 0;

    for (int i = 0; i < m; i++) {
        int temp;   cin >> temp;
        if (temp >= prev) count += temp - prev;
        else count += n - abs(temp - prev);
        prev = temp;
    }

    cout << count << endl;
    return 0;
}