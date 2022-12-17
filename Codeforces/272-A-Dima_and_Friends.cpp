#include <bits/stdc++.h>

using namespace std;

int main()
{
    int persons;
    int fingers;
    int sum = 0;
    int ans = 0;

    cin >> persons;

    for (int i = 0; i < persons; i++)
    {
        cin >> fingers;
        sum += fingers;
    }

    persons++;

    for (int i = 1; i <= 5; i++)
    {
        if ((sum + i) % persons != 1)
        {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}