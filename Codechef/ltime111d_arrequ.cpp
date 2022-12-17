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
        LL n;  cin >> n;
        vector < LL > v(n, 0);
        map < LL, LL > mp;
        for (LL i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }

        sort (v.begin(), v.end());

        LL size = ceil (n / 2.0);
        bool flag = false;
        for (auto x : mp) {
            if (x.second > size) {
                cout << "NO" << endl;
                flag = true;
            }
        }
        if (!flag) cout << "YES" << endl;
    }
    return 0;
}