#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll n;   cin >> n;
    string s;   cin >> s;
    ll cap_count = 0;
    ll small_count = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'X') cap_count++;
        else small_count++;
    }
    ll ans = abs ((n / 2) - max(cap_count, small_count));

    //cout << cap_count << endl;
    //cout << small_count << endl;

    if (cap_count > small_count) {
        ll temp = ans;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'X') {
                if (temp > 0) {
                    s[i] = 'x';
                    temp--;
                }
            }
        }
    }
    else if (small_count > cap_count) {
        ll temp = ans;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'x') {
                if (temp > 0) {
                    s[i] = 'X';
                    temp--;
                }
            }
        } 
    }

    cout << ans << endl;
    cout << s << endl;
    return 0;
}