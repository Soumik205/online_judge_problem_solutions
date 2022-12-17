#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;  cin >> n;
    int l1, r1, l2, r2;

    while (n--) {
        cin >> l1 >> r1 >> l2 >> r2;

        if (l1 != l2) cout << l1 << " " << l2 << endl;
        else if (r1 != r2) cout << r1 << " " << r2 << endl;
        else cout << l1 << " " << r2 << endl;
    }

    return 0;
}