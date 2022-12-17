#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", 'w', stdout);

    int n;  cin >> n;

    cout << n << endl;

    for (int i = 0; i < n; i++) {
        cout << "1";
        if (i != (n - 1)) cout << " ";
    }
    cout << endl;
    return 0;
}