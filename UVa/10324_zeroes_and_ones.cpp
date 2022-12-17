#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    string s;   
    int t = 0;
    while (cin >> s) {
        int test;   cin >> test;
        printf ("Case %d:\n", ++t);

        for (int i = 0; i < test; i++) {
            int a, b;   cin >> a >> b;
            int mi = min (a, b);
            int ma = max (a, b);
            bool one = false;
            bool zero = false;

            for (int j = mi; j <= ma; j++) {
                if (s[j] - '0' == 1) one = true;
                else if (s[j] - '0' == 0) zero = true;
            }

            if (zero && one) cout << "No" << endl;
            else cout << "Yes" << endl;

            one = false;
            zero = false;
        }
    }
    return 0;
}