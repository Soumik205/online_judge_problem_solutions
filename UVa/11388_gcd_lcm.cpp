#include <bits/stdc++.h>
using namespace std;

int gcd (long long a, long long b) { return b == 0 ? a : gcd (b, a % b); }
int lcm (long long a, long long b) { return a * (b / gcd (a, b)); }

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int test;   cin >> test;
    while (test--) {
        long long g, l;     cin >> g >> l;

        if (l % g == 0) cout << g << " " << l << endl;
        else cout << "-1" << endl;
    }
    return 0;
}