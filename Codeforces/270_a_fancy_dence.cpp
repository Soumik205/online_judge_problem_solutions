#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);


    int test;   cin >> test;

    while (test--) {
        int n;  cin >> n;

        if (360 % (180 - n) == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}