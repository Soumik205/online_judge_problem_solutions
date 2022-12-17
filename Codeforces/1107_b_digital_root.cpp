#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int test;   cin >> test;

    while (test--) {
        long long a, b;   cin >> a >> b;

        cout << (a - 1) * 9 + b << endl;
    }
    return 0;
}