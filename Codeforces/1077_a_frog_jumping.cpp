#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", 'w', stdout);

    int test;   cin >> test;

    while (test--) {
        long long a;  cin >> a;
        long long b;  cin >> b;
        long long c;  cin >> c;

        if (c & 1) {
            long long temp = c - 1;
            cout << (a * (temp / 2)) - (b * (temp / 2)) + a << endl;
        }
        else {
            cout << (a * (c / 2)) - (b * (c / 2)) << endl;
        }
    }
    return 0;
}