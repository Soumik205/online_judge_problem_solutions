#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);


    int test;   cin >> test;
    int t = 0;

    while (test--) {
        int n;  cin >> n;
        vector < int > v;

        for (int i = 0; i < n; i++) {
            int temp;   cin >> temp;
            v.push_back (temp);
        }
        int a = (n - 1) / 2;
        printf ("Case %d: %d\n", ++t, v[a]);
        v.clear();
    }
    return 0;
}