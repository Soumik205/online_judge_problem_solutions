#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    int arr[5][5];
    int mat[5][5];

    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++) {
            mat[i][j] = 1;
        }
    }

    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++){
            if (arr[i][j] & 1) {
                mat[i][j] = 1 - mat[i][j];
                mat[i + 1][j] = 1 - mat[i + 1][j];
                mat[i][j + 1] = 1 - mat[i][j + 1];
                mat[i - 1][j] = 1 - mat[i - 1][j];
                mat[i][j - 1] = 1 - mat[i][j - 1];
            }
        } 
    }

    for (int i = 1; i < 4; i++) {
        for (int j = 1; j < 4; j++){
            cout << mat[i][j];
        } 
        cout << endl;
    }
    return 0;
}