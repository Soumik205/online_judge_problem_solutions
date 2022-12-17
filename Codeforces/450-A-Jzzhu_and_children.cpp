#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    int candies;
    int highest;
    int loc;
    
    cin >> test_case >> candies;

    int arr[test_case];
    int mark[test_case];

    for (int i = 0;  i < test_case; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0;  i < test_case; i++)
    {
        if (arr[i] % candies == 0)
        {
            mark[i] = arr[i] / candies;
        }
        else
        {
            mark[i] = (arr[i] / candies) + 1;
        }
    }

    highest = mark[0];
    loc = 1;

    for (int i = 1; i < test_case; i++)
    {
        if (mark[i] >= highest)
        {
            highest = mark[i];
            loc = i + 1;
        }
    }

    cout << loc << endl;
    return 0;
}