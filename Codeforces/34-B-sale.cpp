#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number;
    int carry;
    int sum = 0;

    cin >> number;
    cin >> carry;

    int arr[number];

    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    for (int i = 0; i < carry; i++)
    {
        if (arr[i] < 1)
        {
            sum += arr[i] * (-1);
        }
    }

    cout << sum << endl;
    return 0;
}
