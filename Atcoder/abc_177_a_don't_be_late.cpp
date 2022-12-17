#include <bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    // optimize();

    int s, t, v;    cin >> s >> t >> v;
    if (s > t * v) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}