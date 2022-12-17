#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_case;
    cin >> test_case;

    int arr[test_case];
    int even_count = 0;
    int odd_count = 0;
    int temp_even;
    int temp_odd;

    for (int i = 0; i < test_case; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0) 
        {
            temp_even = i + 1;
            even_count++;
        }
        else
        {
            temp_odd = i + 1;
            odd_count++;
        }
    }

    if (even_count > odd_count) cout << temp_odd << endl;
    else cout << temp_even << endl;

    return 0;

}