#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin >> test;

    int hour1;
    int min1;
    int hour;
    int min;
    int count = 1;
    int cash = 1;

    cin >> hour1 >> min1;

    while (--test)
    {
        cin >> hour >> min;

        if (hour1 == hour && min == min1)
        {
            count++;
            
            if (count > cash) cash = count;
        }
        else count = 1;

        hour1 = hour;
        min1 = min;
    }

    cout << cash << endl;
    return 0;
}