#include <bits/stdc++.h>
using namespace std;

int f (int n) {
    if (n >= 101) return (n - 10);
    else if (n <= 100) return f (f(n + 11));
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    while (true) {
        int n;  cin >> n;
        if (n == 0) return 0;

        printf ("f91(%d) = %d\n", n, f(n));
    }
    return 0;
}