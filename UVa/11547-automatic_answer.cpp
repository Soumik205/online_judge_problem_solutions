#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    int temp;
    int ans;

    while (test_case--)
    {
        cin >> temp;

        ans = ((((((temp * 567) / 9) + 7492) * 235) / 47) - 498);

        ans /= 10;
        ans = ans % 10;

        if  (ans > 0) cout << ans << endl;
        else cout << ans * (-1) << endl;
    }
    return 0;
}