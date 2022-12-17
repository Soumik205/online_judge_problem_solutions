#include <bits/stdc++.h>

using namespace std;

int main()
{
    int first;
    int second;
    int ans;

    while (true)
    {
        cin >> first >> second;

        if (first == -1 && second == -1) break;

        first++;
        second++;

        first = 100 - first;
        second = 100 - second;

        if (first > second) ans = first - second;
        else if (second > first) ans = second - first;
        else ans = 0;

        if (ans > 50) ans = 100 - ans;

        cout << ans << endl;
    }
    return 0;
}