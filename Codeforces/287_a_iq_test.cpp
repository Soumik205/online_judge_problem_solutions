#include <bits/stdc++.h>

using namespace std;

int main()
{
    char arr[4][4];
    int count = 0;
    int rev_count = 0;

    for (int i = 0; i < 4; i ++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == arr[i][j + 1]) count++;
            else if ( arr[i][j] != arr[i][j + 1] ) rev_count++;

            if (arr[i][j] == arr[i + 1][j]) count++;
            else if ( arr[i][j] != arr[i + 1][j] ) rev_count++;

            if (arr[i][j] == arr[i + 1][j + 1]) count++;
            else if (arr[i][j] != arr[i + 1][j + 1]) rev_count++;

            if (count >= 2) {
                cout << "YES" << endl;
                return 0;
            }
            else if (rev_count > 2) {
                cout << "YES" << endl;
                return 0;
            }
            else {
                count = 0;
                rev_count = 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}