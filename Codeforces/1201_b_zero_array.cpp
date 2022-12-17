#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll n;  cin >> n;
    ll sum = 0;
    ll maximum = 0;
    ll loop = n;

    while (loop--) {
        ll temp;     cin >> temp;
        sum += temp;
        maximum = max (temp, maximum); 
    }
    ll t = sum - maximum;
    if (sum % 2 == 1 or t < maximum) {
        cout << "NO" << endl;
        return 0;
    } 
    cout << "YES" << endl;
    return 0;

}