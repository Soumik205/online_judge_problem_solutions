#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    string a, b;    cin >> a >> b;
    int size = a.size();
    string ans;

    for (int i = 0; i < size; i++) {
        if (b[i] - a[i] > 0) {
            cout << "-1" << endl;
            return 0;
        }
    }

    for (int i = 0; i < size; i++) {
        cout << min(a[i], b[i]);
    }
    cout << endl;
    return 0;
}