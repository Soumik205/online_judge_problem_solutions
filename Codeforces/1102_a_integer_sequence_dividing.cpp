#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int n;  cin >> n;

    n %= 4;

    if (n == 0 or n == 3) cout << "0" << endl;
    else cout << "1" << endl;

    return 0;
}