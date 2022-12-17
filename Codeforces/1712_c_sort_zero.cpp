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
        int n;  cin >> n;
        vector < int > v(n + 2);
        map < int , int > mp;
        set < int > s;
        bool flag = true;

        for (int i = 0;i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        for (int i = n - 1; i >= 0; i--) {
            while (i > 0 && v[i] == v[i - 1]) {
                mp[v[i]]--;
                i--;
            }
            // cout << i << endl;
            mp[v[i]]--;
            if (mp[v[i]] == 0) mp.erase(v[i]);
            if (mp.count(v[i])) {
                cout << mp.size() << endl;
                flag = false;
                break;
            }
            if (i && v[i - 1] > v[i]) {
                cout << mp.size() << endl;
                flag = false;
                break;
            }
        }
        if (flag) cout << 0 << endl;
    }
    return 0;
}