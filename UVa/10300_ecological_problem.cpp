#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int test;   cin >> test;

    while (test--) {
        int t;  cin >> t;
        long long count = 0;

        while (t--) {
            int a, b, c;    cin >> a >> b >> c;
            long long ans = a * c;
            count += ans;
        }

        cout << count << endl;
    }
    return 0;
}
