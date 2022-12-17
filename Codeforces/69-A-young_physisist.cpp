#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number;
    int x;
    int y;
    int z;
    int xsum = 0;
    int ysum = 0;
    int zsum = 0;

    cin >> number;

    for (int i = 0; i < number; i++)
    {
        cin >> x >> y >> z;

        xsum += x;
        ysum += y;
        zsum += z;
    }

    if (xsum == 0 && ysum == 0 && zsum == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
