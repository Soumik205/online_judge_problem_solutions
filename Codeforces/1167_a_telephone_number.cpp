#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int test;   cin >> test;

    while (test--) {
        int n;  cin >> n;
        int temp = n;
        string s;   cin >> s;

        for (int i = 0; i < n; i++) {
            if (s[i] - '0' == 8) {
                temp = i;
                break;
            }
        }
        //cout << temp << endl;

        if (n - temp >= 11) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}