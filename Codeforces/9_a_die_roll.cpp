#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int x, y;   cin >> x >> y;

    int ans = max(x, y);

    int p = 6 - ans + 1;

    if (p == 1) cout << "1/6" << endl;
    else if (p == 2) cout << "1/3" << endl;
    else if (p == 3) cout << "1/2" << endl;
    else if (p == 4) cout << "2/3" << endl;
    else if (p == 5) cout << "5/6" << endl;
    else if (p == 6) cout << "1/1" << endl;
    
    return 0;
}