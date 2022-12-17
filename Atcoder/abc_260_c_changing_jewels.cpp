#include<bits/stdc++.h>
using namespace std;
 
typedef long long LL;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen ("in.txt", "r", stdin);
        freopen ("out.txt", "w", stdout);
    #endif
    
    int n, x, y;    cin >> n >> x >> y;
    long long b[15], r[15];

    b[0] = 1, r[0] = 0;

    for (int i = 1; i < n; i++) {
        b[i] = r[i - 1] + b[i - 1] * y;
        r[i] = r[i - 1] + b[i] * x;
    }

    cout << r[n - 1] << endl;
    return 0;
}

/*
Editorial: 
https://atcoder.jp/contests/abc260/editorial/4463
*/