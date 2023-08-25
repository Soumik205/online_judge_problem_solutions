#include<iostream>
using namespace std;

int n, m = 5;
int arr[15][15];
int ans;

void solve (int row, int col, int val, int bomb, int effect) {
    if (row < 0) {
        ans = max (ans, val);
        return;
    }

    for (int i = -1; i <= 1; i++) {
        if ((col + i) < 0 || (col + i) > 4) continue;  // out of bounds

        if (arr[row][col + i] == 1 || arr[row][col + i] == 0) { //no danger
            if (bomb == 0) {
                solve (row - 1, col + i, val + arr[row][col + i], bomb, effect - 1);
            }
            else solve (row - 1, col + i, val + arr[row][col + i], bomb, effect);
        }
        else { // danger
            if (bomb == 0) {
                if (effect > 0) {
                    solve (row - 1, col + i, val, bomb, effect - 1); // no val + something
                }
            }
            else solve (row - 1, col + i, val, 0, 5);
        }
    }
    return;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int test;   cin >> test;
    int t = 0;
    while (test--) {
        cin >> n;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) cin >> arr[i][j];
        }
        ans = 0;
        solve (n - 1, 2, 0, 1, 0);
        cout << "#" << ++t << " " << ans << endl;
    }
    return 0;
}