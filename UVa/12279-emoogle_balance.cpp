#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case = 1;
    int events;

    int treat_count = 0;
    int given_treat_count = 0;
    int balance;
    int temp;

    while (true)
    {
        cin >> events;

        if (events == 0) break;

        while (events--)
        {
            cin >> temp;

            if (temp  > 0) treat_count++;
            else if (temp == 0) given_treat_count++;
        }

        balance = treat_count - given_treat_count;

        cout << "Case " << test_case << ": " << balance << endl;
        test_case++;
        treat_count = 0;
        given_treat_count = 0;
    }
    return 0;
}