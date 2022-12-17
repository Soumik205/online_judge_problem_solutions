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
        vector < LL > v(n);

        for (auto& i : v) cin >> i;
        sort(v.begin(), v.end());
        cout << v[n - 1] + v[n - 2] - v[0] - v[1] << endl;
    }
    return 0;
}
 