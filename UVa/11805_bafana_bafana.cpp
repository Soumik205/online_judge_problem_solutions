#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int test;   cin >> test;
    int t = 0;

    while (test--) {
        int n, k , p;   cin >> n >> k >> p;
        int pass = p % n;
        pass += k;
        pass %= n;

        if (pass == 0) printf ("Case %d: %d\n", ++t, n);
        else printf ("Case %d: %d\n", ++t, pass);
    }
    return 0;
}