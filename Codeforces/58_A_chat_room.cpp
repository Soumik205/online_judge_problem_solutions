#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    string hello = "hello";

    cin >> s;

    int j = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == hello[j]) j++;

        if (j == 5)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
