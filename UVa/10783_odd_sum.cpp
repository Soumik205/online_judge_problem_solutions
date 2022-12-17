#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int test;   cin >> test;
    int t = 0;

    while (test--) {
        int a, b;   cin >> a >> b;
        int count = 0;

        for (int i = a; i <= b; i++) {
            if (i & 1) count += i;
        }

        printf ("Case %d: %d\n", ++t, count);
    }
    return 0;
}