#include <bits/stdc++.h>
using namespace std;

char arr[50][50];
bool visited[50][50];
int level[50][50];

void bfs (int sx, int sy) {
    queue < pair < int, int > > q;
    q.push(make_pair(sx, sy));
    visited[sx][sy] = true;
    level[sx][sy] = 0;

    while (!q.empty()) {
        pair < int , int > u = q.front();
        int x = u.first;
        int y = u.second;
        q.pop();

        if (!visited[x - 1][y]) {
            visited[x - 1][y] = true;
            q.push(make_pair(x - 1, y));
            level[x - 1][y] = level[x][y] + 1;
        }
        if (!visited[x + 1][y]) {
            visited[x + 1][y] = true;
            q.push(make_pair(x + 1, y));
            level[x + 1][y] = level[x][y] + 1;
        }
        if (!visited[x][y + 1]) {
            visited[x][y + 1] = true;
            q.push(make_pair(x, y + 1));
            level[x][y + 1] = level[x][y] + 1;
        }
        if (!visited[x][y - 1]) {
            visited[x][y - 1] = true;
            q.push(make_pair(x, y - 1));
            level[x][y - 1] = level[x][y] + 1;
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        /* freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout); */
    #endif
    //optimize();

    int test;   cin >> test;
    int t = 0;
    while (test--) {
        for (int i = 0; i < 50; i++) {
            for (int j = 0; j < 50; j++) {
                visited[i][j] = false;
                level[i][j] = 0;
            }
        }

        cout << "Case " << ++t << ": ";

        int row, col;   cin >> row >> col;
        int sx = 0, sy = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> arr[i][j];
                if (arr[i][j] == '#' || arr[i][j] == 'm') visited[i][j] = true;
                if (arr[i][j] == 'h') sx = i, sy = j;
            }
        }

        /* // checking the visited array
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (visited[i][j]) cout << 1 << " ";
                else cout << 0 << " ";
            }
            cout << endl;
        } */

        bfs(sx, sy);

        int mx = 0;
        vector < pair < int, int > > v;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (arr[i][j] == 'a' || arr[i][j] == 'b' || arr[i][j] == 'c') {
                    mx = max (mx, level[i][j]);
                    v.push_back(make_pair(i, j));
                }
            }
        }
        cout << mx << endl;
        /* for (auto i : v) cout << i.first << " " << i.second << " " << level[i.first][i.second] << endl; */
    }
    return 0;
}