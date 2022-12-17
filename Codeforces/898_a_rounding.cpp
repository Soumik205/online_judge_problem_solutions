#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    long long n;    cin >> n;
    int digit = n % 10;

    if (digit < 6) cout << n - digit << endl;  
    else cout << n + (10 - digit) << endl; 
    return 0;
}
