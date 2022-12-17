#include<bits/stdc++.h>
using namespace std;
 
typedef long long LL;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    
    int a, b, x, y;     cin >> a >> b >> x >> y;
    char arr[a +  1][b + 1];

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    x--, y--;
    if (x >= 0 && x < a && y >= 0 && y < b && arr[x][y] == '.') ans++;
    if (arr[x][y] == '.') {
        for (int i = x - 1; i >= 0; i--) {
            if (arr[i][y] == '.') ans++; 
            else break;
        }
        for (int i = x + 1; i < a; i++) {
            if (arr[i][y] == '.') ans++;
            else break;
        }
        for (int i = y - 1; i >= 0; i--) {
            if (arr[x][i] == '.') ans++;  
            else break;
        }
        for (int i = y + 1; i < b; i++) {
            if (arr[x][i] == '.') ans++;  
            else break;
        }
    }
    cout << ans << endl;
    return 0;
}
 