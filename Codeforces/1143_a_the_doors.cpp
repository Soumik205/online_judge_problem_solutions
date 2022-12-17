#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;  cin >> n;
    int temp;
    int one = 0;
    int zero = 0;

    for (int i = 0; i < n; i++) {
        cin >> temp;

        if (temp == 0) zero = i;
        else one = i;
    }

    if (zero > one) cout << one + 1 << endl;
    else cout << zero + 1 << endl;

    return 0;
}