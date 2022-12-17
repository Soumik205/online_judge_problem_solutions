#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < long long, long long > pairs;

ll n;
ll price[1010]; 
ll weight[1010];
ll dp[1010][35];

ll knap (ll object, ll w) {
    if (object >= n) return 0;
    if (dp[object][w] != -1) return dp[object][w];
    if (weight[object] > w) return dp[object][w] = knap(object + 1, w);
    else return dp[object][w] = max (price[object] + knap(object + 1, w - weight[object]), knap(object + 1, w));
}
int main()
{
    //freopen ("in.txt", "r", stdin);
    //freopen ("out.txt", "w", stdout);

    ll test;    cin >> test;
    while (test--) {
        memset(dp, -1 , sizeof(dp));
        cin >> n;
        for (ll i = 0; i < n; i++) cin >> price[i] >> weight[i];

        ll nop;     cin >> nop;
        ll total = 0;
        for (ll i = 0; i < nop; i++) {
            ll max_weight;  cin >> max_weight;
            total += knap(0, max_weight);
        }
        cout << total << endl;
    }
    return 0;
}