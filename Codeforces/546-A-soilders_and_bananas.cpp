#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    int dollars;
    int bananas;
    int total = 0;
    int borrow = 0;
    int incr = 2;

    cin >> k >> dollars >> bananas;

    bananas--;
    total += k;


    while (bananas--)
    {
        total += incr * k;
        incr++;
    }

    if (total > dollars) borrow = total - dollars;
    else borrow = 0;

    cout << borrow << endl;
    return 0;
}
