#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;

    int temp;

    for (int i = 0; i < test; i++)
    {
        cin >> temp;

        if (temp % 3 == 0 || temp % 7 == 0 || temp % 10 == 0 || temp % 13 == 0 || temp % 16 == 0) cout << "YES" << endl;
        else if (temp >= 13) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}