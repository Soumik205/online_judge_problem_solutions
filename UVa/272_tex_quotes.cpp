#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    string s;
    bool flag = true;

    while (getline (cin, s))
    {
        long long size = s.size();

        for (int i = 0; i < size; i++)
        {
            if (s[i] == '"')
            {
                if (flag)
                    cout << "``";
                else
                    cout << "''";

                flag = !flag;
            }
            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
