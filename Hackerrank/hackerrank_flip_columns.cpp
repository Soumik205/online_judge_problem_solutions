#include <iostream>
using namespace std;

int arr[20][20];
int n, m, k;    
int ans;

void flip (int j) {
    for (int i = 0; i < n; i++) {
        if (arr[i][j] == 0) arr[i][j] = 1;
        else arr[i][j] = 0;
    }
}

void solve (int count) {
    if (count == k) {
        int onePerRow = 0;
        int localMax = 0;

        for (int i = 0; i < n; i++) {
            onePerRow = 0; // ei line ta ekhanei dite hobe, karon naile proti row er ta calc korar time e ekdom zero hoy na. specially if onePerRow er bhitore dile jodi == m na hoy, taile oi value ta save theke jay
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == 1) onePerRow++;
            }
            if (onePerRow == m) localMax++;
        }
        ans = max (ans, localMax);
        return;
    }


    for (int i = 0; i < m; i++) { // ei loop ta m porjnto cholbe. joto gula column totogula flip
        flip(i);
        solve (count + 1);
        flip(i);
    }
    return;
}


int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    cin >> n >> m >> k;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cin >> arr[i][j];
    }

    ans = 0;
    solve (0);
    cout << ans << endl;
    return 0;

}