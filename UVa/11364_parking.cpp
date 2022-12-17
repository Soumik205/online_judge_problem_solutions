#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int test;   cin >> test;

    while (test--) {
        int n;  cin >> n;
        vector < int  > v;

        while (n--) {
            int temp;   cin >> temp;
            v.push_back (temp);
        }

        int max = *max_element (v.begin(), v.end());
        int min = *min_element (v.begin(), v.end());

        int ans = (max - min) * 2;

        cout << ans << endl;

        v.clear();
    }
    return 0;
}