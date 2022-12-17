#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int n;  cin >> n;
    map < int, int > left;
    map < int, int > right;

    while (n--) {
        int a;  cin >> a;
        int b;  cin >> b;

        left[a]++;
        right[b]++;
    }

    int ans1 = min (left[0], left[1]);
    int ans2 = min (right[0], right[1]);
    int ans = ans1 + ans2;

    cout << ans << endl;
    return 0;
}