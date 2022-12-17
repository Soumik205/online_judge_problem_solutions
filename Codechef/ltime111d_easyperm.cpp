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
        for (int i = n ; i > 0; i--) cout << i << " ";
        cout << endl;
    }
    return 0;
}