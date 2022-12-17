#include<bits/stdc++.h>
using namespace std;
 
typedef long long LL;

const int mx = 1004;
int n, m;   
int arr[mx][mx];

bool inrange (int x, int y) {
    if (x >= 0 && x < n && y >= 0 && y < m) return true;
    else return false;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    
    int test;   cin >> test;
    while (test--) {
        cin >> n >> m;
        memset(arr, 0, sizeof arr);
        int cnt1 = 0;

        for (int i = 0; i < n; i++) {
            string s;   cin >> s;
            for (int j = 0; j < m; j++) {
                arr[i][j] = s[j] - '0';
                if (arr[i][j] == 1) cnt1++;
            }
        }

        if (cnt1 == (n * m)) {
            cout << cnt1 - 3 + 1 << endl;
            continue;
        }

        bool flag = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == 0) {
                    if (inrange(i - 1, j)) {
                        if (arr[i - 1][j] == 0) flag = true;
                    } 
                }
                if (arr[i][j] == 0) {
                    if (inrange(i + 1, j)) {
                        if (arr[i + 1][j] == 0) flag = true;
                    } 
                }
                if (arr[i][j] == 0) {
                    if (inrange(i, j - 1)) {
                        if (arr[i][j - 1] == 0) flag = true;
                    } 
                }
                if (arr[i][j] == 0) {
                    if (inrange(i, j + 1)) {
                        if (arr[i][j + 1] == 0) flag = true;
                    } 
                }
                // further
                if (arr[i][j] == 0) {
                    if (inrange(i + 1, j + 1)) {
                        if (arr[i + 1][j + 1] == 0) flag = true;
                    } 
                }
                if (arr[i][j] == 0) {
                    if (inrange(i + 1, j - 1)) {
                        if (arr[i + 1][j - 1] == 0) flag = true;
                    } 
                }
                if (arr[i][j] == 0) {
                    if (inrange(i - 1, j + 1)) {
                        if (arr[i - 1][j + 1] == 0) flag = true;
                    } 
                }
                if (arr[i][j] == 0) {
                    if (inrange(i - 1, j - 1)) {
                        if (arr[i - 1][j - 1] == 0) flag = true;
                    } 
                }
            }
        }
        if (flag) cout << cnt1 << endl;
        else cout << cnt1 - 1 << endl;
    }
    return 0;
}
 