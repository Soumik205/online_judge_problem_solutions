#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    long long a, b;

    while (cin >> a >> b) {
        cout << max (a, b) - min (a, b) << endl;
    }
    return 0;
}