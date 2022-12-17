#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long test;   cin >> test;
    long long m; 
    long long n;    
    long long ans;

    for (int i = 0; i < test; i++) {
        cin >> n;
        cin >> m;

        ans = (n * m) / 2;

        cout << "Case " << i + 1 << ": " << ans << endl;
    }
    return 0;
    
}