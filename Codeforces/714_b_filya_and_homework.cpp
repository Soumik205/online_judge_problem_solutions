#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll n;  cin >> n;
    set < ll > s;
    map < ll, ll > mp;
    ll minimum = 9000000000000000000;
    ll maximum = 0;
    
    while (n--) {
        ll temp;     cin >> temp;
        s.insert(temp);
        mp[temp] = 1;
        minimum = min (minimum, temp);
        maximum = max (maximum, temp);
    }

    ll size = s.size();

    if (size > 3) {
        cout << "NO" << endl;
        return 0;
    }
    else {
        if (size == 1 or size == 2) {
            cout << "YES" << endl;
        }
        else {
            ll total = maximum + minimum;
            
            if (total & 1) {
                cout << "NO" << endl;
                return 0;
            }
            else {
                total /= 2;

                if (mp[total] > 0) {
                    cout << "YES" << endl;
                    return 0;
                }
                else {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}