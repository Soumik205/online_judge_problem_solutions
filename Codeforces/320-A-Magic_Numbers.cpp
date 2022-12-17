#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long num;
    int temp;
    int count = 0;

    cin >> num;

    while (num != 0)
    {
        temp = num % 10;
        num /= 10;

        if (temp != 1 && temp != 4) 
        {
            cout << "NO" << endl;
            return 0;
        }

        if (num == 0 && temp == 4)
        {
            cout << "NO" << endl;
            return 0;
        }

        if (temp == 4)
        {
            count++;

            if (count > 2)
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        else if (temp == 1)
        {
            count = 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}