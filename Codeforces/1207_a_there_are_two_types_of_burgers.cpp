#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll test;    cin >> test;
    while (test--) {
        ll bun, beef, chic;     cin >> bun >> beef >> chic;
        ll ham_p, chic_p;   cin >> ham_p >> chic_p;
        ll ham = 0;
        ll chicken = 0;

        if (ham_p >= chic_p) {
            while ((bun > 1) and (beef > 0)) {
                ham++;
                bun -= 2;
                beef--;
            }
            while ((bun > 1) and (chic > 0)) {
                chicken++;
                bun -= 2;
                chic--;
            }
        }
        else {
            while ((bun > 1) and (chic > 0)) {
                chicken++;
                bun -= 2;
                chic--;
            }
            while ((bun > 1) and (beef > 0)) {
                ham++;
                bun -= 2;
                beef--;
            } 
        }
        ll ans = (ham * ham_p) + (chicken * chic_p); 
        cout << ans << endl;
    }
    return 0;
}
