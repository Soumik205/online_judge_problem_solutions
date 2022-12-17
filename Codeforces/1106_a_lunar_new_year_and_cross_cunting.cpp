#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char arr[520][520];
    int count = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) cin >> arr[i][j];
    }


    if (n < 3)
    {
        cout << "0" << endl;
        return 0;
    }

    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (arr[i][j] == 'X')
            {
                if (arr[i - 1][j - 1] == 'X' && arr[i - 1][j + 1] == 'X' && arr[i + 1][j - 1] == 'X' && arr[i + 1][j + 1] == 'X') count++;
            }
        }
    }

    cout << count << endl;
    return 0;

}
