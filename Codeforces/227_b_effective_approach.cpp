#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int n;  cin >> n;
    vector < int > v(n + 1);
    long long a = 0, b = 0;

    for (int i = 0; i < n; i++) {
        int temp;   cin >> temp;
        v[temp] = i;
    }

    int m;  cin >> m;

    for (int i = 0; i < m; i++) {
        int t;  cin >> t;
        
        a += v[t] + 1;
        b += n - v[t];
    }

    cout << a << " " << b << endl;
    return 0;

    v.clear();
}