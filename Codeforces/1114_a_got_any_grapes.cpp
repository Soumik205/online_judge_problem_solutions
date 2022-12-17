#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int a;  cin >> a;
    int d;  cin >> d;
    int m;  cin >> m;

    int g;  cin >> g;
    int p;  cin >> p;
    int b;  cin >> b;

    bool ans = true;
    int demand = a + d + m;
    int supply = g + p + b;

    if (g < a) ans = false;
    else if (supply < demand) ans = false;

    int rem = supply - a - b;
    if (rem < d) ans = false;

    if (ans) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
