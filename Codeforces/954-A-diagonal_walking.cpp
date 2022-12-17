#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    string s;
    int count = 0;

    cin >> size;
    cin >> s;

    for (int i = 0; i < size; i++)
    {
        if (s[i] == 'R' && s[i + 1] == 'U')
        {
            count++;
            i++;
        }
        else if (s[i] == 'U' && s[i + 1] == 'R')
        {
            count++;
            i++;
        }
        else count++;
    }

    cout << count << endl;
    return 0;
}
