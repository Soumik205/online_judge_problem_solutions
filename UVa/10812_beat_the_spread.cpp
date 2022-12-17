#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long test_case;
    long long sum;
    long long diff;
    long long highest;
    long long lowest;
    cin >> test_case;

    for (long long i = 0; i <  test_case; i++)
    {
        cin >> sum >> diff;

        if (sum < diff) cout << "impossible" << endl;
        else
        {
            highest = (sum + diff) / 2;
            lowest = (sum - diff) / 2;

            if ((sum + diff) % 2 != 0 && (sum - diff) % 2 != 0) cout << "impossible" << endl;
            else cout << highest << " " << lowest << endl;
        }
    }

    return 0;
}