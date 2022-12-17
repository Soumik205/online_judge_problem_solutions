#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair < long long, long long > pairs;

#define mx 102
#define mx1 50004

int n;
int arr[mx];
ll total;
ll dp[mx][mx1];

ll solve (int i, int sum) {
    if (i == n) {
        ll x = sum;
        ll y = total - sum;
        return abs (x - y);
    }
    if (dp[i][sum] != -1) return dp[i][sum];
    ll& ans = dp[i][sum];
    ans = solve (i + 1, sum + arr[i]);
    ans = min (ans, solve(i +  1, sum));
    return ans;
}
  
int main()
{
    freopen ("Documents/in.txt", "r", stdin);
    freopen ("Documents/out.txt", "w", stdout);

    int test;   cin >> test;
    while (test--) {
        memset (dp, -1, sizeof(dp));
        cin >> n;
        total = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            total += arr[i];
        }
        cout << solve(0, 0) << endl;
    }
}