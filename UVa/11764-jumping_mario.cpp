#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    int size;
    int high = 0;
    int low = 0;
    int count = 1;

    while (test_case--)
    {
        cin >> size;

        int arr[size];
        //memset (arr, arr + size);

        for (int i = 0; i < size; i++) cin >> arr[i];

        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i + 1] > arr[i]) high++;
            else if (arr[i + 1] < arr[i]) low++;
        }

        printf("Case %d: %d %d\n", count, high, low);

        count++;
        high = 0;
        low = 0;
    } 
    return 0;
}