#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n, k;   cin >> n >> k;
    int ans = n * 3;

    int temp = min ((k - 1), (n - k));
    ans += temp;

    cout << ans << endl;
    return 0;
}