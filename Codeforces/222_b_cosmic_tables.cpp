#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);


    int n, m, query;    scanf ("%d %d %d", &n, &m, &query);
    int arr[n][m];
    int row[n];
    int col[m];

    for (int i = 0; i < n; i++) row[i] = i;
    for (int i = 0; i < m; i++) col[i] = i;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) scanf ("%d", &arr[i][j]);
    }

    for (int i = 0; i < query; i++) {
        char s[1];     scanf ("%s", s);
        int x, y;   scanf ("%d %d", &x, &y);
        
        if (s[0] == 'r') swap (row[x - 1], row[y - 1]);
        else if (s[0] == 'c') swap (col[x - 1], col[y - 1]);
        else printf ("%d\n", arr[row[x - 1]][col[y - 1]]);
    }
    return 0;
}