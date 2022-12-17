#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    int total = 0;
    int temp = 0;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    int half = ceil (total / 2.0);

    for (int i = 0; i < size; i++)
    {
        temp += arr[i];

        if (temp >= half)
        {
            printf("%d\n", i + 1);
            return 0;
        }
    }
}
