#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    int police = 0;
    int crime = 0;
    int untreated = 0;
    int temp;

    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        cin >> temp;

        if (temp < 0 && police > 0) crime++;
        else if (temp < 0 && police < 1) untreated++;
        else if (temp > 0) police += temp;

        if (police == crime)
        {
            police = 0;
            crime = 0;
        }
    }

    cout << untreated << endl;
    return 0;
}
