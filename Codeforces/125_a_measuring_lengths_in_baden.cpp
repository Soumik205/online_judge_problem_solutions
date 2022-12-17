#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll n;   cin >> n;
    ll inches = (n / 3);
    //cout << inches << endl;
    if (n % 3 == 2) inches++;
    ll foot = (inches / 12);

    cout << foot << " " << inches % 12 << endl;
    return 0;
}
