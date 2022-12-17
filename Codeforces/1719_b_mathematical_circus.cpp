#include<bits/stdc++.h>
using namespace std;
 
typedef long long LL;


int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    
    int test;   cin >> test;
    while (test--) {
        LL n, k;    cin >> n >> k;
        if (k == 0) {
            cout << "NO" << endl;
            continue;
        }
        if (k & 1) {
            if (((k + 1) * 2) % 4 == 0) {
                cout << "YES" << endl;
                for (int i = 1; i <= n; i += 2) cout << i << " " << i + 1 << endl;
            }
            else cout << "NO" << endl;
        }
        else {
            if ((k + 2) % 4 == 0) {
                cout << "YES" << endl;
                bool flag = true;
                for (int i = 1; i <= n; i += 2) {
                    if (flag) {
                        cout << i + 1 << " " << i << endl;
                        flag = false;
                        continue;
                    }
                    else {
                        cout << i << " " << i + 1 << endl;
                        flag = true;
                        continue;
                    }
                }
            }
            else cout << "NO" << endl;
        }
    }
    return 0;
}