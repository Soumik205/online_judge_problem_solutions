#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int n;  cin >> n;

    if (n == 1) {
        cout << "-1\n";
        return 0;
    }
    else {
        if (n & 1) {
            cout << "-1";
        }
        else {
            for (int i = n; i >= 1; i--) {
                cout << i << " ";
            }
        }
        cout << endl;
        return 0;
    }
}