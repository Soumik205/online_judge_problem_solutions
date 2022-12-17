#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    int arr[test_case];
    int count = 0;
    int height = 1;

    int max = 1;

    for (int i = 0; i < test_case; i++)
    {
        cin >> arr[i];
    }

    sort (arr, arr + test_case);

    for (int i = 0; i < test_case - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
            height++;

            if (height > max) max = height;
        }
        else height = 1;
    }

    cout << max << " " << test_case - count << endl;
    return 0;
}