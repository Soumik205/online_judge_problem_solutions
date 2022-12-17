#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    long long t;
    long long c;
    long long count = 0;
    long long temp;
    long long ans = 0;

    cin >> n >> t >> c;

    for (int i = 0; i < n; i ++)
    {
        cin  >> temp;

        if (temp <= t) count++;
        else
        {
            if (c <= count)
            {
                ans += count + 1 - c;
                count = 0;
            }
            else count = 0;

        }
    }

    if (count > 0)
    {
        if (c <= count)
        {
            ans += count + 1 - c;
            count = 0;
        }
        else count = 0;
    }

    cout << ans << endl;
    return 0;
}
